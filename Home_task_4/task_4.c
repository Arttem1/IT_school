#include <stdio.h> 
#include <ctype.h>

int analysis(char buffer[])
{

	if (strlen(buffer) > 12)
		return 0;
	int result = 0;
	int a = strlen(buffer);

	double sum = 0; // for higher values ​​than int

	int flag = 0;
	if (buffer[0] == '-')
		flag = 1;

	for (int i = 0; i < strlen(buffer)-1; i++)
	{
		if (flag)
		{ 
			if (isdigit(buffer[i + 1]))
			{	
				sum = 10 * sum + buffer[i + 1] - '0';
				if ((sum > 2147483647) || (sum < (-2147483647 - 1)))
					return 0;
				result = (int)sum;
				if (i == (strlen(buffer) - 3))
				{
					result = result * (-1);
					break;
				}
			}
			else
				return 0;

	
		}
		else
		{
			if (isdigit(buffer[i]))
			{
				sum = (10 * sum + buffer[i] - '0');
				if ((sum > 2147483647) || (sum < (-2147483647 -1 )))
					return 0;
				result = (int)sum;
			}
			else
				return 0;
		}


	}
	

	return result;

}




int main()
{
	char buffer[100];

	printf("Enter a string with spaces: ");
	
	fgets(buffer, 100, stdin);
	
	printf("Your input is: %s", buffer);
	
	int number = analysis(buffer);
	
	if (!(number))
	{ 
		printf("Error");
		return 0;
	}
	
	printf("Your input is: %i", number);


}