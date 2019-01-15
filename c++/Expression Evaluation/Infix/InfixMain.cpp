
#include "stdafx.h"


int main(int argc,char argv[])
{
	// declaration of operator stack with MathOperator objects
    Stack<MathOperator> OperatorStack;
    
    // declaration of the operand stack. 
    Stack<float> OperandStack;
    
    MathOperator opr1,opr2;
    int rank = 0;
    float number;
    char ch;

    // process the expression until '=' is read
    while (cin.get(ch) &&  ch != '=')
    {
        //  ********  process a floating point operand  ********
        if (isdigit(ch) || ch == '.')
        {
            // put back digit or '.' and read number
            cin.putback(ch);
            cin >> number;
            // rank of operand is 1. accumulated rank must be 1
            rank++;
            if (rank > 1)
                error(OperatorExpected);
            // push the operand on the operand stack
            OperandStack.Push(number);
        }
        //  *********  process an operator  **********
        else if (isoperator(ch))
        {
            // rank of each operator other than '(' is -1.
            // accumulated rank should be 0
            if (ch != '(')  // rank of '(' is 0
                rank--;
            if (rank < 0)
                error(OperandExpected);
                
            // build a MathOperator object holding current
            // operator. pop the operator stack and evaluate
            // as long as the operator on the top of the stack
            // has a precedence >= that of the current operator.
            // push the current operator on the operator stack
            opr1 = MathOperator(ch);
            while(!OperatorStack.StackEmpty() && (opr2 = OperatorStack.Peek()) >= opr1)
            {
                opr2 = OperatorStack.Pop();
                opr2.Evaluate(OperandStack);
            }
            OperatorStack.Push(opr1);
        }
        //  *********  process a right parenthesis  **********
        else if (ch == rightparenthesis)
        {
            // build a MathOperator object holding ')', which
            // has precedence lower than the stack precedence
            // of any operator except '('. pop the operator stack
            // and evaluate the subexpression until '(' surfaces 
            // or the stack is empty. if the stack is empty, a
            // '(' is missing; otherwise, delete '('.
            opr1 = MathOperator(ch);
            while(!OperatorStack.StackEmpty() &&
                  (opr2 = OperatorStack.Peek()) >= opr1)
            {
                opr2 = OperatorStack.Pop();
                opr2.Evaluate(OperandStack);
            }
            if(OperatorStack.StackEmpty())
                error(MissingLeftParenthesis);
            opr2 = OperatorStack.Pop(); // get rid of '('
        }   
        //  *********  have some invalid input  **********
        else if (!iswhitespace(ch))
            error(InvalidInput);
    }
    
    // the rank of the complete expression must be 1
    if (rank != 1)
        error(OperandExpected);
    
    
    // flush operator stack and complete expression evaluation.
    // if find left parenthesis, a right parenthesis is missing.
    while (!OperatorStack.StackEmpty())     
    {
        opr1 = OperatorStack.Pop();
        if (opr1.GetOp() == leftparenthesis)
            error(MissingRightParenthesis);
        opr1.Evaluate(OperandStack);
    }
    

    // value of the expression is on the top of the operand stack
    cout << "The value is " << OperandStack.Pop() << endl;
	return 0;

}