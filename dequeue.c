#include "dequeue.h"

//用数组写循环队列

void dequeueInit(Dequeue * qu)
{
	qu->_head = qu->_tail = qu->_data;
	qu->_size = 0;

}

void dequeueEmpty(Dequeue * qu)
{
	qu->_head = qu->_tail;
	qu->_size = 0;
}

int dequeuePush(Dequeue * qu, DataType x)//入队列
{
	*qu->_tail = x;
	if (qu->_tail + 1 == qu->_head ||                   //在别的地方队列满
		(qu->_tail + 1 - qu->_data == QUEUENUM &&   //在data的地方队列满
		qu->_head == qu->_data))                  //如果队列满的话就返回-1，没有满的话再++
	{
		return -1;
	}
	qu->_tail++;
	if (qu->_tail - qu->_data == QUEUENUM)    //如果刚好达到上限，就tail重置
	{                                         //如果没有达到上限的话就给size++，并且返回0
		qu->_tail = qu->_data;
	}
	qu->_size++;
	return 0;
}

void dequeuePop(Dequeue * qu)    //出队列
{
	if (dequeueIsEmpty)
	{
		return -1;
	}
	qu->_head++;
	if (qu->_head - qu->_data == QUEUENUM)    
	{                                         
		qu->_head = qu->_data;
	}
	qu->_size--;
}

DataType dequeueFront(Dequeue * qu)//取队首元素
{
	return *qu->_head;
}

DataType dequeueBack(Dequeue * qu)//取队尾元素
{
	if (qu->_tail == qu->_data)
	{
		return qu->_data[QUEUENUM - 1];
	}
	return qu->_tail[-1];
}

int dequeueIsEmpty(Dequeue * qu)//判断队列空
{
	return qu->_head == qu->_tail;
}

size_t dequeueSize(Dequeue * qu)
{
	return qu->_size;
}