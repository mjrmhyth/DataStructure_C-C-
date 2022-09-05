#include "SeqList.h"


void SeqListPrint(SL * ps)
{
	for (int i = 0; i < ps->size; i++)
		printf("%d ", ps->a[i]);
	printf("\n");
}
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListDestroy(SL * ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListCheckCapacity(SL* ps)
{
	//���û�пռ���߿ռ��������㣬������
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SL* temp = (SL*)realloc(ps->a, newcapacity * sizeof(SL));
		if (temp == NULL)
		{
			printf("realloc failed\n");
			exit(-1);
		}
		ps->a = temp;
		ps->capacity = newcapacity;
	}

}

void SeqListPushBack(SL * ps, int x)
{

	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPopBack(SL *ps)
{
	/*//����Ĵ���ʽ
	if(ps->size>0)
		ps->size--;
	*/

	//���ѵĴ���ʽ
	assert(ps->size > 0);//���Ե����ã����Ϊ�����������Ϊ�٣��򱨴�
	ps->size--;
}

/*
���ܣ�ͷ��������
*/
void SeqListPushFront(SL *ps, SLDataType x)
{
	SeqListCheckCapacity(ps);

	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SL * ps)
{
	assert(ps->size > 0);
	int begin = 1;
	while (begin < ps -> size)
	{
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	ps->size--;
}

int SeqListFind(SL * ps, SLDataType x)
{
	int value = -1;
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return value;
}

void SeqListInsert(SL * ps, int pos, SLDataType x)
{
	SeqListCheckCapacity(ps);
	int end = pos-1;
	while (end < ps->size-1)
	{
		ps->a[end + 1] = ps->a[end];
		++end;
	}
	ps->a[pos] = x;
}

void SeqListErase(SL* ps, int pos)
{
	int index = pos;
	while (index < ps->size - 1)
	{
		ps->a[index] = ps->a[index + 1];
		index++;
	}
}

//int arr[4] = { 4,1,4,6 };
//һ����������nums�����������֮�⣬�������ֶ����������Ρ���д�����ҳ�������ֻ����һ�ε����֡�Ҫ��ʱ�临�Ӷ���O(n),�ռ临�Ӷ���O(1)
int* singleNumbers(int * nums, int numsSize, int * returnSize)
{
	int *ret;
	for (int i = 0; i < numsSize; i++)
	{

	}
}