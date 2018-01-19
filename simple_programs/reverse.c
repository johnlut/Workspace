#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

void reverse(char * str);

int main ()
{

	char str[] = "esaelp em esrever"; 

	reverse(str);

	printf("%s\n", str);

	return 0; 
}

void reverse(char * str)
{

	int len = strlen(str);
	int steps = strlen(str) / 2;
	int end = len - 1;
	char temp; 

	for(int i = 0; i < steps; i++)
	{
		temp = str[end - i];
		str[end - i] = str[i];
		str[i] = temp;;
		printf("%s\n", str);
	}


}