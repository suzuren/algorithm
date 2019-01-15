
#ifndef _NEXTPOS_H
#define _NEXTPOS_H

PosType NextPos(PosType CurPos, int Dir)
{
	PosType ReturnPos;
	switch (Dir)
	{
	case 1:
		ReturnPos.r = CurPos.r;
		ReturnPos.c = CurPos.c + 1;
		break;
	case 2:
		ReturnPos.r = CurPos.r + 1;
		ReturnPos.c = CurPos.c;
		break;
	case 3:
		ReturnPos.r = CurPos.r;
		ReturnPos.c = CurPos.c - 1;
		break;
	case 4:
		ReturnPos.r = CurPos.r - 1;
		ReturnPos.c = CurPos.c;
		break;
	}
	return ReturnPos;
}

#endif