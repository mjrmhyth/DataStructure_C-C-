#include "LinearList.h"



void InitList(SqList &L,int lsize)
{
	for (int i = 0; i < lsize; i++)
		L.data[i] = 0;
	L.length = lsize;//顺序表的初始长度为0
}

void InitList(SeqList &L)
{
	L.data = (int *)malloc(InitSize * sizeof(int));//用malloc申请一片连续的存储空间
	L.length = 0;
	L.LMaxSize = InitSize;
}

/*
功能：增加动态数组的长度，扩容
*/
void IncreaseSize(SeqList &L, int len)
{
	int * p = L.data;
	L.data = (int*)malloc((L.LMaxSize + len) * sizeof(int));
	for (int i = 0; i < L.length; i++)
	{
		L.data[i] = p[i];//将数据复制到新区域
	}
	L.LMaxSize = L.LMaxSize + len;
	free(p);
	p = NULL;
}
/*
功能：插入元素，往数组的第i个位置插入元素e
*/
bool ListInsert(SeqList &L, int i, int e)
{
	if (i<1 || i>L.length + 1)
		return false;
	if (L.length >= L.LMaxSize)
		return false;
	for (int j = L.length; j >= i; j--)//将第i个元素及之后的元素后移
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = e;//在位置i处放入元素e
	L.length++;//长度加1
	return true;
}

/*
功能：删除位置i元素e
*/
bool ListDelete(SeqList &L, int i, int &e)
{
	if (i<1 || i>L.length)
		return false;
	e = L.data[i - 1];//将被删除的元素赋值给e
	for (int j = i; j < L.length; j++)
		L.data[i - 1] = L.data[i];
	L.length--;
	return true;
}

int main()
{
	//SqList L;//申明一个顺序表
	//InitList(L, MaxSize);//初始化顺序表
	//for (int i = 0; i < L.length; i++)
	//{
	//	printf("data[%d]=%d\n", i, L.data[i]);
	//}

	SeqList L;//申明一个顺序表
	InitList(L);//初始化顺序表
	IncreaseSize(L,5);//动态扩容5个int类型数据的空间


	//删除元素
	int e = -1;//用变量e把删除的元素返回
	if (ListDelete(L, 3, e))
		printf("已删除第3个元素，删除元素值为%d\n", e);
	else
		printf("位序i不合法，删除失败\n");
	return 0;
}
