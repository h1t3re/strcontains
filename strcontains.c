#include <stdlib.h>
#include <stdio.h>
#include "../../include/strlen.h"

int strcontains(const char *str1, const char *str2)
{
	int i = 0;
	int j = 0;
	int strlen_array1 = 0;
	int strlen_array2 = 0;
	char *array1;
	char *array2;
	
	while(strlen_array1 < strlen(str1))
		strlen_array1 = strlen_array1 +1;
	while(strlen_array2 < strlen(str2))
		strlen_array2 = strlen_array2 +1;
	
       	array1 = (char *)malloc(strlen_array1*sizeof(char));
       	array2 = (char *)malloc(strlen_array2*sizeof(char));
	
	while(i < strlen_array1)
	{
		*(array1 + i)	= *(str1 + i);
		i = i +1;
	}
	i = 0;
	while(i < strlen_array2)
	{
		*(array2 + i)	= *(str2 + i);
		i = i +1;
	}
	i = 0;	
	if(strlen_array1 > strlen_array2)
	{
		printf("%c\n", *(array2 + i));
		while(*(array2 + i) != '\0')
		{
			j = 0;
			while((*(array1 + i + j) == (*(array2 + i + j))) & (*(array2 + i) != '\0'))
			{
				printf("%c\n", *(array2 + i + j));
				j = j + 1;
				if(j+1 == strlen_array2)
					return 0;
			}
			i = i +1;
		}
	}
	return 1;
}

int main()
{
	char *string0 = "4\0";
	char *string1 = "a\0";
	char *string2 = "0123456789\0";
	printf("%d\n", strcontains(string2, string0));
	printf("%d\n", strcontains(string2, string1));
	return 0;
}
