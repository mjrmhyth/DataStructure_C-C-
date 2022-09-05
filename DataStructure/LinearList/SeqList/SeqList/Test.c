#include "SeqList.h"

void TestSeqList1()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPrint(&sl);

	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPrint(&sl);

	SeqListDestroy(&sl);
}


void TestSeqList2()
{
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPrint(&sl);

	SeqListPushFront(&sl, 10);
	SeqListPushFront(&sl, 20);
	SeqListPushFront(&sl, 30);
	SeqListPushFront(&sl, 40);
	SeqListPushFront(&sl, 50);
	SeqListPushFront(&sl, 60);
	SeqListPrint(&sl);

	SeqListDestroy(&sl);
}

void TestSeqList2()
{
	int arr[4] = { 4,1,4,6 };
	int size = 0;
	int *ret = singleNumbers(arr, 4, &size);

}
//дһ������ͨѶ¼�Ĳ˵�
void menu()
{
	printf("*************************************\n");
	printf("��ѡ����Ĳ���:\n");
	printf("1��ͷ��  2��ͷɾ\n");
	printf("3��β��  4��βɾ\n");
	printf("*************************************\n");
}

int main()
{
	menu();
	//TestSeqList1();
	//TestSeqList2();
	TestSeqList3();

	return 0;
}