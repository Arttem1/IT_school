#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>


typedef struct Node
{
	struct Node* next;
	struct Node* previous;
	char info;
} Node;


typedef struct List_Stack
{
	struct Node* Head;
	struct Node* Tail;
} List_Stack;


void Push(List_Stack* stack, char value)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));
	NewNode->info = value;
	NewNode->next = stack->Head;
	NewNode->previous = NULL;
	if (stack->Head)
		(stack->Head)->previous = NewNode;

	(stack)->Head = NewNode;

	if (!stack->Tail) //performed 1 time
		stack->Tail = stack->Head;
}

char Pop(List_Stack* stack)
{
	char value;
	Node* oldNode = stack->Head;
	if (!oldNode)
		return value = ' ';
	value = oldNode->info;
	stack->Head = oldNode->next;
	if (stack->Head)
		stack->Head->previous = NULL;
	else
		stack->Tail = NULL;
	free(oldNode);
	return value;
}

int main()
{	

	char openBrackets[3] = { '(', '[', '{' };
	char closeBrackets[3] = { ')', ']', '}' };

	bool flag = true;

	List_Stack Stack;
	List_Stack* pointerStack = &Stack;
	pointerStack->Head = NULL;
	pointerStack->Tail = NULL;
	char s = ' ';
	printf("Enter value with brackets");
	while ((s = getchar()) != '\n' && flag )
	{ 
			for (int k = 0; k < 3; k++)
			{
				if (s == openBrackets[k])
				{
					Push(pointerStack, s);
					break;
				}
				if (s == closeBrackets[k])
				{
					if (Pop(pointerStack) != openBrackets[k])
						flag = false;
					break;
				}
			}
	}

	if (flag && (pointerStack->Tail == NULL))
		printf("\nThe expression is correct\n");
	else printf("\nThe expression isn't correct \n");

	return 0;

}