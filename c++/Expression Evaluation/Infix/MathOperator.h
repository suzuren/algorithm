
#ifndef _MATHOPERATOR_H
#define _MATHOPERATOR_H

// a class that handles operators on the operator stack
class MathOperator
{
    private:
        // operator and its two precedence values
        char op;
        int inputprecedence;
        int stackprecedence;
        
    public:
        // constructors; includes default constructor and a 
        // constructor that initializes the object
        MathOperator(void);
        MathOperator(char ch);
        
        // member functions handling operator on the stack
        int operator>= (MathOperator a) const;
        void Evaluate (Stack<float> &OperandStack);
        char GetOp(void);
};

#endif

