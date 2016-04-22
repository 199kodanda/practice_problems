#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int duplicateElement(int *arr, int N)
{
	int i, j;

	for (i = 0; i < N; i++)
	{ 
		for (j = i + 1; j < N; j++)
		{
			if (arr[i] == arr[j])
				return arr[j];
		}
	}
		
}
void main()
{
	int *arr, N, i, res;
	printf("Enter N value:");
	scanf("%d", &N);
	if (N < 0)
		printf("invalid input");
	else{
		arr = (int*)malloc(N*sizeof(int));
		printf("Enter Elements:");
		for (i = 0; i < N; i++)
			scanf("%d", &arr[i]);
		res = duplicateElement(arr, N);
		if (res != 0)
			printf("Duplicate is %d", res);
		else
			printf("No Duplicates");
	}
	_getche();
}
