#include <stdio.h>
#define MAX 10 /* The maximum size of the stack */
#include <stdlib.h>
//this is my first stack program
void push(int stack[], int *top, int value)
{
	if(*top < MAX )
	{
		*top = *top + 1;
		stack[*top] = value;
	}
	else
	{
		printf("The stack is full can not push a value\n");

		exit(0);
	}
}
void pop(int stack[], int *top, int * value)
{
	if(*top >= 0 )
	{
		*value = stack[*top];
		*top = *top - 1;
	}
	else
	{
		printf("The stack is empty can not pop a value\n");
		exit(0);
	}
}
int main()
{
	int stack[MAX];
	int top = -1;
	int n,value;
	do
	{
		do
		{
			printf("Enter the element to be pushed\n");
			scanf("%d",&value);
			push(stack,&top,value);
			printf("Enter 1 to continue\n");
			scanf("%d",&n);
		} while(n == 1);
		printf("Enter 1 to pop an element\n");
		scanf("%d",&n);
		while( n == 1)
		{
			pop(stack,&top,&value);
			printf("The value popped is %d\n",value);
			printf("Enter 1 to pop an element\n");
			scanf("%d",&n);
		}
		printf("Enter 1 to continue\n");
		scanf("%d",&n);
	} while(n == 1);
	return 0;
}
