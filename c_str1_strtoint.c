/*Given a String , convert it into a integer ?*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int strlen(char *str1)
{
	int i = 0;
	for (i = 0;str1[i]!='\0'; i++);
	return i;
}
int strToInt(char *str)
{
	int i = 0;
	int length,count=0,rem,num=0;
	length = strlen(str);
	while (str[i] != '\0')
	{
		if (str[0] == '-' || (str[i] >= '0'&&str[i] <= '9'))
			count++;
		i++;
	}
	if (count == length)
	{
		i = 0;
		if (str[0] == '-' && str[1] == '\0')
			return -1;
		else
			if (str[0] == '-')
				i++;
		while (str[i] != '\0')
		{
			rem = str[i] - '0';
			num = num * 10 + rem;
			i++;
		}
		if (str[0] != '-')
			return num;
		else
			return -num;
	}
	else
		return -1;
}



int main()
{
	char *str = '\0';
	int res;
	str = (char*)malloc(100 * sizeof(char));
	printf("enter string1:");
	gets(str);
	if (*str == NULL)
		printf("invalid input");
	else
	{
		res = strToInt(str);
		if (res == -1)
			printf("invalid input");
		else
			printf("%d", res);
	}
	getche();
	return 0;
}
