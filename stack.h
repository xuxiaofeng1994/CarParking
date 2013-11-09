#define STACK_TYPE int

/*
	push
*/
void push(STACK_TYPE value,struct *stack);

/*
	pop
*/
void pop(struct *stack);
/*
	top
*/
STACK_TYPE top(struct *stack);

/*
	isFull
*/
int isFull(struct *stack);

/*
	isEmpty
*/
int isEmpty(struct *stack);
