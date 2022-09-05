#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//#define N 1000
//typedef int SLDataType;
//
////静态顺序表
//typedef struct SeqList
//{
//	SLDataType a[N];//静态顺序表
//	int size;//表示数组中存储了多少个数据
//}SL;
//
////接口函数，--命名风格跟着STL走
//void SeqListInit(SL *ps);
//void SeqListPushBack(SL *ps, SLDataType x);
//void SeqListPopBack(SL *ps);
//void SeqListPushFront(SL *ps, SLDataType x);
//void SeqListPopFront(SL *ps);


typedef int SLDataType;
typedef struct SeqList
{
	SLDataType *a;//动态顺序表
	int size;//表示数组中存储了多少个数据
	int capacity;//数组实际能存储数据的空间容量大小，是数据个数
}SL;

//接口函数
void SeqListInit(SL* ps);//初始化顺序表
void SeqListDestroy(SL * ps);//释放资源
void SeqListPrint(SL * ps);


void SeqListCheckCapacity(SL* ps);//检查表的容量是否已满
void SeqListPushBack(SL *ps, SLDataType x);//尾插数据
void SeqListPopBack(SL *ps);
void SeqListPushFront(SL *ps, SLDataType x);
void SeqListPopFront(SL *ps);

//找到了返回x位置下标，没有找到返回-1
int SeqListFind(SL * ps, SLDataType x);
//在指定的下标位置插入元素x
void SeqListInsert(SL * ps, int pos, SLDataType x);
//在指定位置删除pos位置的数据
void SeqListErase(SL* ps, int pos);