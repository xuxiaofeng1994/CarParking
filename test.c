#include"stack.h"
#include<stdio.h>

#define CAR_MAX 10
#define CAR_TEMP_MAX 10

/*
	定义车辆信息的结构体
*/
typedef struct node
{
	int idNum;
	int carNum;
	int timeEnter;
	int timeOut;
	int priceHour;
	int priceTotal;
	struct node * next;
}carInfo;

/*
	定义车库的数组
*/
struct 
{
	static STACK_TYPE park[CAR_MAX];
	static int topElement = -1;
	static int const lengthMax = CAR_MAX;

}carPark;

/*
	定义用于便道的数组
*/
struct 
{
	static STACK_TYPE park[CAR_TEMP_MAX];
	static int topElementi = -1;
	static const lengthMax = CAR_TEMP_MAX;
}carParkTemp;


void printStack(struct *stack)
{
	int i;
	for(i = 0;i <= stack->lengthMax;i++)
	{
		printf("the carNum is %d\n",stack->park[i]);
	}
}


/*
	push
*/
void push(STACK_TYPE value,struct *stack)
{
	assert(!isFull(stack));
	stack->topElement += 1;
	stack->park[stack->topElement] = value;
}

/*
	pop
*/
void pop(struct *stack)
{
	assert(!isEmpty(stack));
	stack->topElement -= 1;
}
/*
	top
*/
STACK_TYPE top(struct *stack)
{
	assert(!isEmpty(stack));
	return stack->park[stack->topElement];
}

/*
	isFull
*/
int isFull(struct *stack)
{
	return stack->topElement == lengthMax;
}

/*
	isEmpty
*/
int isEmpty(struct *stack)
{
	return stack->topElement == -1;
}

int main()
{
	push(110,&carPark);
	printStack(&carPark);
}
