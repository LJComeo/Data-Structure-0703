#include "dequeue.h"

int main()
{
	Dequeue test;
	dequeueInit(&test);
	dequeuePush(&test, 1);
	dequeuePush(&test, 2);
	dequeuePush(&test, 3);
	dequeuePush(&test, 4);
	printf("%d ",dequeueFront(&test));
	system("pause");
	return 0;
}