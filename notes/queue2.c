#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

struct Queue
{
	int max;
	int *array;
	int front;
	int rear;
	int itemCount;
};

struct Queue *Queue_create(int m)
{
	struct Queue *q = malloc(sizeof(struct Queue));
	assert(q != NULL);
	
	q->front = 0;
	q->rear = -1;
	q->itemCount = 0;
	q->max = m;
	q->array = (int*) malloc(q->max * sizeof(int));
	
	return q;
}

void Queue_destroy(struct Queue *q)
{
	assert(q != NULL);
	free(q);
}

int peek(struct Queue *q)
{
	return q->array[q->front];
}

int isEmpty(struct Queue *q)
{
	if (q->itemCount == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isFull(struct Queue *q)
{
	if(q->itemCount == q->max)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int size(struct Queue *q)
{
	return q->itemCount;
}

void enqueue(struct Queue *q, int data)
{
	if(!isFull(q))
	{
		if(q->rear == q->max-1)
		{
			q->rear = -1;
		}
		q->array[++q->rear] = data;
		q->itemCount++;
	}
}

int dequeue(struct Queue *q)
{
	int data = q->array[q->front++];
	if(q->front == q->max)
	{
		q->front = 0;
	}
	q->itemCount--;
	return data;
}

int main(int argc, char *argv[])
{
	struct Queue *queue = Queue_create(6);
	
	
	
	return 0;
}
