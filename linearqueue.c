#include <stdio.h>
#include<stdlib.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main() 
{

	int choice, x;
  	do 
	{
	  	printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		scanf("%d",&choice);
    
		switch(choice)
		{
			case 1: 
			{ 
			printf("\nEnter the number to Add\t");
                	scanf("%d", &x);enQueue(x); break;
			}
			case 2:deQueue();break;
			case 3:display();break;
			case 4:exit(1);
			default:printf("\n Invalid choice");
	
		}
		} while (choice!=4);
	return 0;
}
void enQueue(int value) 
{
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else 
{
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("\nInserted -> %d", value);
  }
}

void deQueue() 
{
  if (front == -1)
    printf("\nQueue is Empty!!");
  else {
    printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

// Function to print the queue
void display() 
{
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("\n%d  ", items[i]);
  }
  printf("\n");
}
