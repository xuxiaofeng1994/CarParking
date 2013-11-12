
/*
	push
*/
void push(STACK_TYPE value)
{
	assert(!isFull());
	topElement += 1;
	park[topElement] = value;
}

/*
	pop
*/
void pop(void)
{
	assert(!isEmpty());
	topElement -= 1;
}
/*
	top
*/
STACK_TYPE top(void)
{
	assert(!isEmpty());
	return park[topElement];
}

/*
	isFull
*/
int isFull(void)
{
	return topElement >= CAR_MAX - 1;
}

/*
	isEmpty
*/
int isEmpty(void)
{
	return topElement == -1;
}
