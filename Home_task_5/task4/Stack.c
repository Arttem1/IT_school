#include <stdlib.h>
#include <stdio.h>
#include "Stack.h"



Node* push(Node** pTop, info_t value)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->info = value;
	newNode->prev = *pTop;
	*pTop = newNode;
	return newNode;
}


info_t pop(Node** pTop)
{
	Node* oldTop = *pTop;
	info_t info = oldTop->info;

	*pTop = (*pTop)->prev;
	free(oldTop);
	return info;
}

info_t getTopValue(Node* top)
{
	return top->info;
}

bool isEmpty(Node* top)
{
	return top == NULL;
}

void PrintStack(Node* top)
{
	Node* copyTop = top;
	while (!isEmpty(copyTop))
	{
		printf("%c", copyTop->info);
		copyTop = copyTop->prev;
	}
}