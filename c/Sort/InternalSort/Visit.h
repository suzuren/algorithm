
#ifndef _VISIT_H
#define _VISIT_H

Status VisitInt(KeyType e)
{	
	printf("%-3d", e);
	return OK;	
}

Status VisitChar(InfoType e)
{	
	printf("%-3c", e);
	return OK;
}

#endif
