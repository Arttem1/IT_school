#include <stdio.h>
#include "Stack.h"

int main()
{
	Node* top = NULL;

	push(&top, '(');
	push(&top, '[');
	push(&top, '{');
	PrintStack(top);

	/*
	while (!isEmpty(top))
		printf("%c\n", pop(&top));
	*/
	return 0;

}
