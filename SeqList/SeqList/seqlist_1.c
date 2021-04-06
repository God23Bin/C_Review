#define _CRT_SECURE_NO_WARNINGS 1

// ˳���ľ�̬ʵ��

#define MAXSIZE 100		// ˳������󳤶�

typedef int ElemType;	// �Զ���˳��������Ԫ��Ϊ����/����

typedef struct 
{
	ElemType data[MAXSIZE];	// ������洢˳����е�Ԫ��
	unsigned int length;	// ˳�����Ԫ�صĸ���
}SeqList,*PSeqList;

// ˳���LL�ĳ�ʼ��
void InitList(PSeqList LL);

// ����˳���LL
void DestroyList(PSeqList LL);

// ��˳���LL�ĵ�ii��λ�ò���Ԫ��ee
// ����ֵ��-1 -> ��ʾLL��Ԫ��ee�����ڣ�0 - > ʧ�ܣ�1 - >�ɹ�
int InsertList(PSeqList LL, unsigned int ii, ElemType* ee);

// ��˳���LL��ͷ������Ԫ��ee
int PushFront(PSeqList LL, ElemType* ee);

// ��˳���LL��β������Ԫ��ee
int PushBack(PSeqList LL, ElemType* ee);

// ��ȡ˳���ĳ���
int GetLengthList(PSeqList LL);

// ��ȡ˳����е�ii��Ԫ�ص�ֵ�������ee��
int GetElem(PSeqList LL, unsigned int ii, ElemType* ee);

// ���˳���
void CleanList(PSeqList LL);

// �ж�˳����Ƿ�Ϊ��
int IsEmpty(PSeqList LL);

// ��ӡ˳���ȫ��Ԫ��
void PrintList(PSeqList LL);

// ����ee��˳����е�λ��
int LocateElem(PSeqList LL, ElemType* ee);

// ɾ��˳���LL�е�ii��Ԫ��
int DeleteElem(PSeqList LL, unsigned int ii);

// ɾ��˳���LL��ͷԪ��
int PopFront(PSeqList LL);

// ɾ��˳���LL��βԪ��
int PopBack(PSeqList LL);

// ���ù鲢�ķ����������������˳���La��Lb���ϲ���һ�������˳���Lc
int MergeList(PSeqList La, PSeqList Lb, PSeqList Lc);

int main() 
{
	SeqList LL;		// ����˳���
	ElemType ee;	// ����һ������Ԫ��

	return 0;
}

void InitList(PSeqList LL) 
{
	CleanList(LL);
}

void CleanList(PSeqList LL) 
{
	if (LL == NULL) return;

}