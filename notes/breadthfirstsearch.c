#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

// using Queue structure to implement Breadth First Search
// can be used to find the shortest path between two nodes

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
	int vertices, num1, num2;
	printf("Input how many vertices to have in the graph: ");
	scanf("%d", &vertices);
	struct Queue *queue = Queue_create(vertices);
	int graph[vertices][vertices];
	for(int row = 0; row < vertices; row++)
	{
		for(int col = 0; col < vertices; col++)
		{
			graph[row][col] = 0;
		}
	}
	
	/*
	graph[0][1] = 1;
	graph[0][2] = 1;
	graph[1][3] = 1;
	graph[1][7] = 1;
	graph[1][4] = 1;
	graph[6][7] = 1;
	graph[4][5] = 1;
	graph[4][6] = 1;
	*/
	
	printf("Enter a number greater than vertices to stop adding edges.\n");
	while(num1 <= vertices && num2 <= vertices)
	{
		printf("Enter two numbers to connect with an edge: ");
		scanf("%d %d", &num1, &num2);
		graph[num1][num2] = 1;
	}
	
	printf("Using the Breadth First Search algorithm, the graph is:\n");
	for(int row = 0; row < vertices; row++)
	{
		int count = 0;
		for(int col = 0; col < vertices; col++)
		{
			if(graph[row][col] == 1)
			{
				enqueue(queue, col);
				count++; // to ensure a number from row is not printed twice
				if(count == 1)
				{
					printf("%d\n", row);
				}
			}
			if(graph[row][col] == 2)
			{
				count++;
			}
		}
		while(!isEmpty(queue))
		{
			int j = dequeue(queue);
			printf("%d\n", j);
			graph[j][0] = 2; // to ensure a number from col is not printed twice
		}
	}

	Queue_destroy(queue);
	
	return 0;
}
