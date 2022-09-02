#include "LinearList.h"



void InitList(SqList &L,int lsize)
{
	for (int i = 0; i < lsize; i++)
		L.data[i] = 0;
	L.length = lsize;//˳���ĳ�ʼ����Ϊ0
}

void InitList(SeqList &L)
{
	L.data = (int *)malloc(InitSize * sizeof(int));//��malloc����һƬ�����Ĵ洢�ռ�
	L.length = 0;
	L.LMaxSize = InitSize;
}

/*
���ܣ����Ӷ�̬����ĳ��ȣ�����
*/
void IncreaseSize(SeqList &L, int len)
{
	int * p = L.data;
	L.data = (int*)malloc((L.LMaxSize + len) * sizeof(int));
	for (int i = 0; i < L.length; i++)
	{
		L.data[i] = p[i];//�����ݸ��Ƶ�������
	}
	L.LMaxSize = L.LMaxSize + len;
	free(p);
	p = NULL;
}
/*
���ܣ�����Ԫ�أ�������ĵ�i��λ�ò���Ԫ��e
*/
bool ListInsert(SeqList &L, int i, int e)
{
	if (i<1 || i>L.length + 1)
		return false;
	if (L.length >= L.LMaxSize)
		return false;
	for (int j = L.length; j >= i; j--)//����i��Ԫ�ؼ�֮���Ԫ�غ���
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = e;//��λ��i������Ԫ��e
	L.length++;//���ȼ�1
	return true;
}

/*
���ܣ�ɾ��λ��iԪ��e
*/
bool ListDelete(SeqList &L, int i, int &e)
{
	if (i<1 || i>L.length)
		return false;
	e = L.data[i - 1];//����ɾ����Ԫ�ظ�ֵ��e
	for (int j = i; j < L.length; j++)
		L.data[i - 1] = L.data[i];
	L.length--;
	return true;
}

int main()
{
	//SqList L;//����һ��˳���
	//InitList(L, MaxSize);//��ʼ��˳���
	//for (int i = 0; i < L.length; i++)
	//{
	//	printf("data[%d]=%d\n", i, L.data[i]);
	//}

	SeqList L;//����һ��˳���
	InitList(L);//��ʼ��˳���
	IncreaseSize(L,5);//��̬����5��int�������ݵĿռ�


	//ɾ��Ԫ��
	int e = -1;//�ñ���e��ɾ����Ԫ�ط���
	if (ListDelete(L, 3, e))
		printf("��ɾ����3��Ԫ�أ�ɾ��Ԫ��ֵΪ%d\n", e);
	else
		printf("λ��i���Ϸ���ɾ��ʧ��\n");
	return 0;
}
