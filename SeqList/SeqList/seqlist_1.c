#define _CRT_SECURE_NO_WARNINGS 1

// 顺序表的静态实现

#define MAXSIZE 100		// 顺序表的最大长度

typedef int ElemType;	// 自定义顺序表的数据元素为整数/整型

typedef struct 
{
	ElemType data[MAXSIZE];	// 用数组存储顺序表中的元素
	unsigned int length;	// 顺序表中元素的个数
}SeqList,*PSeqList;

// 顺序表LL的初始化
void InitList(PSeqList LL);

// 销毁顺序表LL
void DestroyList(PSeqList LL);

// 在顺序表LL的第ii个位置插入元素ee
// 返回值：-1 -> 表示LL或元素ee不存在；0 - > 失败；1 - >成功
int InsertList(PSeqList LL, unsigned int ii, ElemType* ee);

// 在顺序表LL的头结点插入元素ee
int PushFront(PSeqList LL, ElemType* ee);

// 在顺序表LL的尾结点插入元素ee
int PushBack(PSeqList LL, ElemType* ee);

// 获取顺序表的长度
int GetLengthList(PSeqList LL);

// 获取顺序表中第ii中元素的值，存放在ee中
int GetElem(PSeqList LL, unsigned int ii, ElemType* ee);

// 清空顺序表
void CleanList(PSeqList LL);

// 判断顺序表是否为空
int IsEmpty(PSeqList LL);

// 打印顺序表全部元素
void PrintList(PSeqList LL);

// 查找ee在顺序表中的位置
int LocateElem(PSeqList LL, ElemType* ee);

// 删除顺序表LL中第ii个元素
int DeleteElem(PSeqList LL, unsigned int ii);

// 删除顺序表LL中头元素
int PopFront(PSeqList LL);

// 删除顺序表LL中尾元素
int PopBack(PSeqList LL);

// 采用归并的方法，将两个升序的顺序表La和Lb，合并成一个升序的顺序表Lc
int MergeList(PSeqList La, PSeqList Lb, PSeqList Lc);

int main() 
{
	SeqList LL;		// 创建顺序表
	ElemType ee;	// 创建一个数据元素

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