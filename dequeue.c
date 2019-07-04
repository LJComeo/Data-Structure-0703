#include "dequeue.h"

//������дѭ������

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

int dequeuePush(Dequeue * qu, DataType x)//�����
{
	*qu->_tail = x;
	if (qu->_tail + 1 == qu->_head ||                   //�ڱ�ĵط�������
		(qu->_tail + 1 - qu->_data == QUEUENUM &&   //��data�ĵط�������
		qu->_head == qu->_data))                  //����������Ļ��ͷ���-1��û�����Ļ���++
	{
		return -1;
	}
	qu->_tail++;
	if (qu->_tail - qu->_data == QUEUENUM)    //����պôﵽ���ޣ���tail����
	{                                         //���û�дﵽ���޵Ļ��͸�size++�����ҷ���0
		qu->_tail = qu->_data;
	}
	qu->_size++;
	return 0;
}

void dequeuePop(Dequeue * qu)    //������
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

DataType dequeueFront(Dequeue * qu)//ȡ����Ԫ��
{
	return *qu->_head;
}

DataType dequeueBack(Dequeue * qu)//ȡ��βԪ��
{
	if (qu->_tail == qu->_data)
	{
		return qu->_data[QUEUENUM - 1];
	}
	return qu->_tail[-1];
}

int dequeueIsEmpty(Dequeue * qu)//�ж϶��п�
{
	return qu->_head == qu->_tail;
}

size_t dequeueSize(Dequeue * qu)
{
	return qu->_size;
}