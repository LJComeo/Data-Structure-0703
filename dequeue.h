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
int dequeueIsEmpty(Dequeue * qu);//判断队列空
DataType dequeueBack(Dequeue * qu);//取队尾元素
DataType dequeueFront(Dequeue * qu);//取队首元素
void dequeuePop(Dequeue * qu);   //出队列
int dequeuePush(Dequeue * qu, DataType x);//入队列
void dequeueEmpty(Dequeue * qu);
void dequeueInit(Dequeue * qu);


#endif //_DEQUEUE_H_