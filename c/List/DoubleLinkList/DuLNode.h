
struct DuLNode
{
	ElemType data;
	struct DuLNode *next;
	struct DuLNode *prior;	
};
typedef struct DuLNode DuLNode;
typedef struct DuLNode *DuLinkList;
