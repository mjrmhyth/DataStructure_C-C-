#pragma once

#include <stdio.h>
#include <stdlib.h>


#define MaxSize 10 //Ĭ����󳤶�
#define InitSize 10//��̬�����ڴ�ʱĬ�ϵ���󳤶�
//��̬�����ڴ�
typedef struct
{
	int data[MaxSize];//�þ�̬������������Ԫ��
	int length;//˳���ĵ�ǰ����
}SqList;
void InitList(SqList &L, int lsize);

//��̬�����ڴ�
typedef struct
{
	int * data;//��̬���������ָ��
	int LMaxSize;//˳����������
	int length;//˳���ǰ����
}SeqList;//˳�������Ͷ���

void InitList(SeqList &L);
void IncreaseSize(SeqList &L, int len);//���Ӷ�̬����ĳ���
bool ListInsert(SeqList &L, int i, int e);//������ĵ�i��λ�ò���Ԫ��e
bool ListDelete(SeqList &L, int i, int &e);//ɾ��λ��iԪ��e
