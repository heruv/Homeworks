#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int correctCheker(char* arrptr) 
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (*(arrptr) != '\0')
	{
		if ((i<0) || (j<0) || (k<0))
		{
			break;
		}
		
		char* ptr = arrptr;

		if (*(arrptr) == '{' )
		{
			switch (*(ptr + 1))
			{
			case ')':
				j--;
				break;
			case ']':
				k--;
				break;
			}
			i++;
		}
		else if (*(arrptr) == '}')
		{
			i--;
		}

		if (*(arrptr) == '(' )
		{
			switch (*(ptr + 1))
			{
			case '}':
				i--;
				break;
			case ']':
				k--;
				break;
			}
			j++;
		}
		else if (*(arrptr) == ')')
		{
			j--;
		}

		if (*(arrptr) == '[')
		{
			switch (*(ptr + 1))
			{
			case '}':
				i--;
				break;
			case ')':
				j--;
				break;
			}
			++k;
		}
		else if (*(arrptr) == ']' )
		{
			k--;
		}

		arrptr++;
	}	
		return((i == 0) && (j == 0) && (k == 0));
}


int main() 
{
	char arr[21];
	char buffer[25];
	char* ptr = arr;
	
	while (correctCheker(ptr))
	{
		fgets(buffer, 25, stdin);
		if (strlen(buffer) > 21)
		{
			printf("error\n");
		}
	}

	
correctCheker(ptr);	
	
	return 0;
}
