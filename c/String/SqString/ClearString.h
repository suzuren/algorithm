
#ifndef _CLEARSTRING_H
#define _CLEARSTRING_H

Status ClearString(SqString &S)
{
	S.len = 0;
	return OK;
}

#endif