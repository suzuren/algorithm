
#ifndef _ASSIGN_H
#define _ASSIGN_H

Status Assign(BiTree & T,TElemType value)
{
	T->data = value;
	return OK;
}

#endif

