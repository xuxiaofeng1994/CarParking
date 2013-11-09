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
