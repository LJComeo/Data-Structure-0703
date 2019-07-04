#ifndef _DEQUEUE_H_
#define _DEQUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#define QUEUENUM 100
typedef int DataType;

typedef struct
{
	DataType _data[QUEUENUM];
	DataType * _head;
	DataType * _tail;
	size_t _size;
}Dequeue;

size_t dequeueSize(Dequeue * qu);
int dequeueIsEmpty(Dequeue * qu);//�ж϶��п�
DataType dequeueBack(Dequeue * qu);//ȡ��βԪ��
DataType dequeueFront(Dequeue * qu);//ȡ����Ԫ��
void dequeuePop(Dequeue * qu);   //������
int dequeuePush(Dequeue * qu, DataType x);//�����
void dequeueEmpty(Dequeue * qu);
void dequeueInit(Dequeue * qu);


#endif //_DEQUEUE_H_