
#ifndef _VISIT_H
#define _VISIT_H

Status Visit(TElemType e)
{
	if(e)
	{
		printf("%c ",e);
		return OK;
	}
	else
		return ERROR;
	return OK;
}

#endif
