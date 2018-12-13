#include <stdio.h>
#include "Stack.h"

int main()
{
	
	Node* top = NULL;
	
	char openBrackets[3] = { '(', '[', '{' };
	char closeBrackets[3] = { ')', ']', '}' };

	bool flag = true;
	int tmp = 0;
	char s = ' ';
	printf("Enter code");
	printf("\n");
	while (((s = getchar()) != '\n' || (tmp <= 3)) && flag)
	{
		if (s == '/')
			tmp++;
		else
			tmp =0;

		for (int k = 0; k < 3; k++)
		{
			if (s == openBrackets[k])
			{
				push(&top, s);
				break;
			}
			if (s == closeBrackets[k] && !isEmpty(top))
			{
				if (pop(&top) != openBrackets[k])
					flag = false;
				break;
			}
		}
	}

	if (flag && (isEmpty(top)))
		printf("\nThe expression is correct\n");
	else printf("\nThe expression isn't correct \n");

	return 0;

}
