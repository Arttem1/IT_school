#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char info_t;

const int MAXSIZE = 100; 

typedef struct Node
{ 
	char info[100]; 
	int  size; 
} Node;

void Push(Node *top, char value)
{ 
	if (top->size == MAXSIZE)
	{	
		printf("Stack is full");       
		return; 
	}    
	top->info[top->size] = value;
	(top->size)++;
}

info_t pop(Node* top)
{
	if (top->size == 0)
	{
		info_t space = ' ';
		return space;
	}
	(top->size)--;
	return top->info[top->size];
}

info_t getTopValue(Node* top)
{
	return top->info;
}

bool isEmpty(Node* top)
{
	return top == NULL;
}

int main()
{
	char openBrackets[3] = { '(', '[', '{' }; 
	char closeBrackets[3] = { ')', ']', '}' }; 

	bool flag;

	Node Stak; 
	Node* top = &Stak;


	Stak.size = 0;    
	flag = true;

	char s = ' ';
	printf("Enter value with brackets");

	while ((s = getchar()) != '\n' && flag)
		for (int k = 0; k < 3; k++)
		{
			if (s == openBrackets[k])
			{
				Push(top, s);
				break;
			}
			if (s == closeBrackets[k])
			{
				if (pop(top) != openBrackets[k])
					flag = false;
				break;
			}
		}


	if (flag && (Stak.size == 0))
		printf("\nThe expression is correct\n");
	else printf("\nThe expression isn't correct \n");

	return 0;
}
