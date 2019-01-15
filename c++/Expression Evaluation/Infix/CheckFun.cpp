
#ifndef _CHECKFUN_H
#define _CHECKFUN_H

#include <stdlib.h>
#include <iostream.h>

// checks if character is an operator or parentheses
int isoperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' ||
    	ch == '/' || ch == '^' || ch == '(')
		return 1;
    else
        return 0;
}

// checks if character is a whitespace character
int iswhitespace(char ch)
{
    if (ch == ' ' || ch == '\t' || ch == '\n')
		return 1;
    else
        return 0;
}

// error handling function
void error(int n)
{
    // table gives the different error messages
    static char *errormsgs[] = {
                    "Operator expected",
                    "Operand expected",
                    "Missing left parenthesis",
                    "Missing right parenthesis",
                    "Invalid input"
                };
                        
    // the parameter n is an error message index
    // print the message and terminate the program  
    cerr << errormsgs[n] << endl;
    exit(1);
}

#endif


