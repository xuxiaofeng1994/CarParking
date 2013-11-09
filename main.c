#include"stack.h"
#include<stdio.h>

void printStack(struct *stack)
{
	int i;
	for(i = 0;i <= stack->lengthMax;i++)
	{
		printf("the carNum is %d\n",stack->park[i]);
	}
}

int main()
{
	push(110,&carPark);
	printStack(&carPark);
}
