#include<stdio.h>
#include<stdlib.h>
# define N 50

void enqueue();
void dequeue();
void display();

int queue[N];
int rear=-1;
int front=-1;

int main()
{int choice;
while(1)
{
printf("\n1:Enqueue,2:Dequeue,3:Display,4:Exit\n");

printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{case 1:
	enqueue();
break;
case 2:
	dequeue();
	break;
case 3:
	display();
	break;
case 4:
	exit(0);
	default:
		printf("Wrong choice\n");
	break;}
}
}

void enqueue()
{int data;
if(rear==N-1)
{printf("\n Overflow");
}
else

{if(front==-1)
front=0;
printf("Enter data:");
scanf("%d",&data);
rear++;
queue[rear]=data;
}
}
void dequeue()
{if(front==-1||front>rear)
{   printf("Underflow\n");
    return;
}
else
{
printf("Element deleted from queue is %d\n",queue[front]);	
front++;	
}
}
void display()
{int i;
if(front==-1)
printf("QUEUE IS EMPTY");
else
{printf("Queue is :\n");
for(i=front;i<=rear;i++)
printf("%d",queue[i]);
printf("\n");
}

}




