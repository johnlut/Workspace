#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <ctype.h>


void translate(char * str); 

int main ()
{
	char buffer[1024];
	char result[1024];  
	char word[15]; 
	int word_index = 0; 

	printf("please enter a sentence\n");
	fgets(buffer, sizeof(buffer), stdin);  

	//printf("%s\n", buffer);
	for(int i = 0; strlen(buffer); i++)
	{
		if(isalpha(buffer[i]))
		{
			strcat(word, &buffer[word_index]); 
		}

		else
		{
			translate(word); 
			strcat(result, word); 
			strcat(result, " ");
			memset(word, '\0', sizeof(word));  
			word_index = 0; 
		}

	}

	printf("%s\n", result);
}

void translate(char * str)
{

	int len = strlen(str); 
	int end = len - 1; 

	str[end] = str[0]; 

	for(int i = 0; i < len; i++)
	{
		str[i] = str[i + 1]; 
	}

	strcat(str, "ay"); 
}