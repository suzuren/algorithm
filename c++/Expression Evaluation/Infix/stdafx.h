
#ifndef _STDAFX_H
#define _STDAFX_H

#include <iostream.h>
#include <stdlib.h>
#include <ctype.h> // used for function 'isdigit'
#include <math.h>  // used for function pow


//#pragma hdrstop

const	int MaxStackSize=50;

// list of constants specifying specific error messages  
const int OperatorExpected = 0,
          OperandExpected = 1,
          MissingLeftParenthesis = 2,
          MissingRightParenthesis = 3,
          InvalidInput = 4;
          
// labels designating the parentheses characters 
const char leftparenthesis  = '(',
           rightparenthesis = ')';


#include "Stack.h"
#include "astack.h"

#include "MathOperator.h"

#include "mathop.h"


int isoperator(char ch);
int iswhitespace(char ch);
void error(int n);

#endif
