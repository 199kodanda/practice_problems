/*Find which character appeared maximum number of times in a String .*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char maxOccuranceChar(char *str)
{
	char MaxOccuredChar;
	int i = 0, max;
	int *buf = (int*)malloc(256*sizeof(int));
	if (*str == NULL)
		return NULL;
	while (str[i] != '\0')
	{
		buf[str[i]]++;
		i++;
	}
	max = buf[0];
	for (i = 0; i < 256; i++)
	{
		if (max < buf[i])
		{
			max = buf[i];
			MaxOccuredChar = (char)i;
		}
	}
	return MaxOccuredChar;
}
int main()
{
	char *str, res;
	str = (char*)malloc(100 * sizeof(char));
	printf("Enter String:\n");
	gets(str);
	res = maxOccuranceChar(str);
	printf("\nMax Occured Char is : %c", res);
	getche();
	return 0;
}
