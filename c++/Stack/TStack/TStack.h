
#ifndef _TSTACK_H
#define _TSTACK_H

template <class TS>
class TStack
{

private:
	// ˽�����ݳ�Ա����ջ���鼰ջ��ָ��
	TS tstacklist[MaxTStackSize];
	int top;
public:

	// ���캯������ʼ��top
	TStack(void);

	// �ı�ջ�Ĳ���
	void Push(const TS & item);
	TS Pop(void);
	void ClearTStrack(void);

	// ����ջ��Ԫ��
	TS peek(void) const;

	// ���ջ״̬�ķ���
	int TStackEmpty(void)const;
	int TStackFull(void)const;	//������ʵ��

};

#endif
