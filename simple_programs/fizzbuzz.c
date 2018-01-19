#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main ()
{
	char result[8]; 
	memset(result, '\0', sizeof(result));

	for(int i = 1; i <= 100; i ++)
	{
		// if factor of three
		if(i%3 == 0)
		{
			strcat(result, "fizz");
		}
		// if factor of five
		if(i%5 == 0)
		{
			strcat(result, "buzz");
		}
		// if not factor of either
		if(result[0] == '\0')
		{
			sprintf(result,"%d", i);
		}
		// print result and reset buffer
		printf("%s\n", result);
		memset(result, '\0', sizeof(result));
	}
	return 0; 
}