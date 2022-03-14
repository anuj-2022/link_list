#include<stdio.h>
#include<stdlib.h>

#define SIZE 5  

int stack[SIZE];//declaration of stack with size
int TOP=-1;//top of stack
void stack_push(int data)
{                  
	if(TOP==SIZE-1)//4(stack is full)
	{
		printf("STACK IS FULL\n");
		exit(0);
	}
	else
	{
	TOP++;    
	stack[TOP]=data;
	}
}
void stack_pop()
{
	if(TOP==-1)
	{	
		printf("STACK IS EMPTY\n");
                exit(0);
	}
	else
	{
	printf("POP DATA IS: %d\n",stack[TOP]);
	TOP--;
	}
}
void display()
{
	if(TOP== -1)
	{
		printf("STACK IS EMPTY\n");
                exit(0);
	}
	int i;
	for(i=0;i<=TOP;i++)//0->1;1->2;2->
	printf("%d\n",stack[i]);//stack[i]=1,2,3
}
int main()
{
	stack_push(1);
	stack_push(2);
	stack_push(3);
	display();
	stack_pop();
	display();
}
