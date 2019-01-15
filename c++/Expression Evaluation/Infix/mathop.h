
#ifndef _MATHOP_H
#define _MATHOP_H

// default constructor
MathOperator::MathOperator(void)
{}

// constructor that assigns operator and precedences values
MathOperator::MathOperator(char ch)
{
    op = ch;    // assign operator
    switch(op)
    {
        // '+' and '-' have input/stack precedence 1
        case '+':   
        case '-':   inputprecedence = 1;
                    stackprecedence = 1;
                    break;

        // '*' and '/' have input/stack precedence 2
        case '*':   
        case '/':   inputprecedence = 2;
                    stackprecedence = 2;
                    break;

        // '^' has input precedence 4 and stack precedence 3.
        // done so the operator is right associative
        case '^':   inputprecedence = 4;
                    stackprecedence = 3;
                    break;

        // '(' has input precendence 3, stack precedence -1
        case '(':   inputprecedence = 3;
                    stackprecedence = -1;
                    break;

        // ')' has input/stack precedence 0
        case ')':   inputprecedence = 0;
                    stackprecedence = 0;
                    break;
    }
}

// overload the >= operator by comparing stackprecedence of
// the current object with inputprecedence of a. used when
// reading an operator to determine whether operators
// on the stack should be evaluated before pushing the new
// operator on the stack. 
int MathOperator::operator>= (MathOperator a) const
{
    return stackprecedence >= a.inputprecedence;
}
        
// evaluate operator for the current object. First pop two
// operands from the operand stack, then execute operator and
// push the result back onto the operand stack.   
void MathOperator::Evaluate (Stack<float> &OperandStack)
{
    float operand1 = OperandStack.Pop(); // get right operand
    float operand2 = OperandStack.Pop(); // get left operand
            
    // evaluate operator and push result back on the stack
    switch (op)                          // select operation
    {
        case '+' :  OperandStack.Push(operand2 + operand1);
                    break;
                            
        case '-':   OperandStack.Push(operand2 - operand1);
                    break;
                            
        case '*':   OperandStack.Push(operand2 * operand1);
                    break;
                
        case '/':   OperandStack.Push(operand2 / operand1);
                    break;
                    
        case '^':   OperandStack.Push(pow(operand2,operand1));
                    break;
    }
}

// return operator associated with current object        
char MathOperator::GetOp(void)
{
    return op;
}

#endif

