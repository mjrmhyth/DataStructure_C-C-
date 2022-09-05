#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//#define N 1000
//typedef int SLDataType;
//
////��̬˳���
//typedef struct SeqList
//{
//	SLDataType a[N];//��̬˳���
//	int size;//��ʾ�����д洢�˶��ٸ�����
//}SL;
//
////�ӿں�����--����������STL��
//void SeqListInit(SL *ps);
//void SeqListPushBack(SL *ps, SLDataType x);
//void SeqListPopBack(SL *ps);
//void SeqListPushFront(SL *ps, SLDataType x);
//void SeqListPopFront(SL *ps);


typedef int SLDataType;
typedef struct SeqList
{
	SLDataType *a;//��̬˳���
	int size;//��ʾ�����д洢�˶��ٸ�����
	int capacity;//����ʵ���ܴ洢���ݵĿռ�������С�������ݸ���
}SL;

//�ӿں���
void SeqListInit(SL* ps);//��ʼ��˳���
void SeqListDestroy(SL * ps);//�ͷ���Դ
void SeqListPrint(SL * ps);


void SeqListCheckCapacity(SL* ps);//����������Ƿ�����
void SeqListPushBack(SL *ps, SLDataType x);//β������
void SeqListPopBack(SL *ps);
void SeqListPushFront(SL *ps, SLDataType x);
void SeqListPopFront(SL *ps);

//�ҵ��˷���xλ���±꣬û���ҵ�����-1
int SeqListFind(SL * ps, SLDataType x);
//��ָ�����±�λ�ò���Ԫ��x
void SeqListInsert(SL * ps, int pos, SLDataType x);
//��ָ��λ��ɾ��posλ�õ�����
void SeqListErase(SL* ps, int pos);