#include <stdlib.h>
#include "../../include/strlen.h"
#include "../../include/strdup.h"

int strcontains(const char *str1, const char *str2)
{
	int i = 0;
	int j = 0;
	int strlen_array1 = 0;
	int strlen_array2 = 0;
	char *array1;
	char *array2;
	char *tmp;
	int tmp0 = 0;

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
	if(strlen_array1 < strlen_array2)
	{
		tmp = strdup(array1);
		array1 = strdup(array2);
		array2 = tmp;
		tmp0 = strlen_array1;
		strlen_array1 = strlen_array2;
		strlen_array2 = tmp0;
	}
	i = 0;
	while(*(array1 + i) != '\0')
	{
		j = 0;
		while((*(array1 + i + j) == (*(array2 + j))) & (*(array2 + j) != '\0'))
			j = j + 1;
		if(j == strlen_array2)
			return 0;
		i = i +1;
	}
	return 1;
}
