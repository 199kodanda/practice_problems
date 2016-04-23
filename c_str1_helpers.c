/*implemetation of string functions*/



#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int strlen(char * str)
{
	int i = 0;

	while (*(str + i))
		i++;

	return i;
}
int strcmp(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] == str2[i]) {
		if (str1[i] == '\0' || str2[i] == '\0')
			break;
		i++;
	}

	if (str1[i] == '\0' && str2[i] == '\0')
		return 1;
	else
		return 0;
}
char* strcat(char *str1, char *str2)
{
	if (*str1 == NULL || *str2 == NULL)
		return NULL;
	
	int i = 0;
	int k = 0;
	for (i = 0; str1[i] != '\0';++i);
	while (str2[k] != '\0' )
	{
		str1[i++] = str2[k++];
	}
	str1[i] = '\0';
	return str1;
}

char* strrev(char *str)
{
	
	
	if (str == NULL)
		return NULL;
	int i = 0;
	for (i = 0; str[i] != '\0'; i++);
	int len = i - 1;
	char temp;
	i = 0;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return str;
}

char* strstr(char *str1, char *str2)
{
	int i, j;
	int flag = 0;

	if ((str1 == NULL || str2 == NULL))
		return NULL;

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] == str2[0])
		{
			for (j = i;; j++)
			{
				if (str2[j - i] == '\0')
				{ 
					flag = 1; 
					break; 
				}
				if (str1[j] == str2[j - i]) 
					continue;
				else 
					break;
			}
		}
		if (flag == 1) 
			break;
	}

	if (flag) 
		return (str1 + i);
	else 
		return NULL;
}


int main()
{
	int length;
	int option,index=0;
	char *res,*rev;
	char *str1 = (char*)malloc(100 * sizeof(int));
	char *str2 = (char*)malloc(100 * sizeof(int));
	while (1)
	{
	printf("\nEnter Ur Option : \n1.strlen\n2.strcat\n3.strcmp\n4.strstr\n5.strrev\n6.exit\n\n");
		scanf("%d", &option);
		
			switch (option)
			{
			case 1:
				
				printf("\nEnter String: ");
				getchar();
				gets(str1);
				length = strlen(str1);
				printf("\n\n%d\n\n", length);
				break;


			case 2: 
				
				
				printf("\nEnter 1st string:");
				getchar();
				gets(str1);
				printf("\nEnter 2st string:");
				gets(str2);
				
				res = strcat(str1, str2);
			
				if (res == NULL)
					printf("\n\nInvalid\n\n");
				else
					puts(res);
				break;


			case 3: 
				
				
				printf("\nEnter 1st string:");
				getchar();
				gets(str1);
				printf("\nEnter 2st string:");
				gets(str2);
				if (strcmp(str1, str2))
					printf("Equal");
				else
					printf("Not Equal");
				break;


			case 4: 


				printf("\nEnter 1st string:");
				getchar();
				gets(str1);
				printf("\nEnter 2st string:");
				gets(str2);
				res = strstr(str1, str2);
				if (res == NULL)
					printf("Invalid");
				else
					puts(res);
				break;
				

			case 5:
				
				
				printf("Enter String:");
				getchar();
				gets(str1);
				rev = strrev(str1);
				if (rev == NULL)
				{
					printf("Invalid");
				}
				else
				puts(rev);
				break;


			case 6:exit(0);

				
			default: printf("Invalid option\n");

				break;
			}
	
	}
	getche();
	return 0;
	
}