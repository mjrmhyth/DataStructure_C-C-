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
	//如果没有空间或者空间容量不足，则扩容
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
	/*//温柔的处理方式
	if(ps->size>0)
		ps->size--;
	*/

	//爆裂的处理方式
	assert(ps->size > 0);//断言的作用：如果为真正常，如果为假，则报错
	ps->size--;
}

/*
功能：头插入数据
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
//一个整形数组nums里除两个数字之外，其它数字都出现了两次。请写程序找出这两个只出现一次的数字。要求时间复杂度是O(n),空间复杂度是O(1)
int* singleNumbers(int * nums, int numsSize, int * returnSize)
{
	int *ret;
	for (int i = 0; i < numsSize; i++)
	{

	}
}