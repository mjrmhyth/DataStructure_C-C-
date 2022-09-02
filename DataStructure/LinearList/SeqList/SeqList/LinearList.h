#pragma once

#include <stdio.h>
#include <stdlib.h>


#define MaxSize 10 //默认最大长度
#define InitSize 10//动态分配内存时默认的最大长度
//静态分配内存
typedef struct
{
	int data[MaxSize];//用静态的数组存放数据元素
	int length;//顺序表的当前长度
}SqList;
void InitList(SqList &L, int lsize);

//动态分配内存
typedef struct
{
	int * data;//动态分配数组的指针
	int LMaxSize;//顺序表最大容量
	int length;//顺序表当前长度
}SeqList;//顺序表的类型定义

void InitList(SeqList &L);
void IncreaseSize(SeqList &L, int len);//增加动态数组的长度
bool ListInsert(SeqList &L, int i, int e);//往数组的第i个位置插入元素e
bool ListDelete(SeqList &L, int i, int &e);//删除位置i元素e
