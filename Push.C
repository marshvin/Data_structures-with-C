//program to push elements in a stack
#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(int item)
{
	if(top==N-1)
	{printf("Stack is full,EXIT\n");
	}
	else
	{top=top+1;
	stack[top]=item;
	}
}
void display()

{int i;
for(i=top;i>0;i--)
{printf("%d\n",stack[i]);
}
}
int main()
{
	push(10);
	push(30);
	push(50);
	push(70);
	push(90);

	display();
	return 0;
	
}
