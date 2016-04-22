#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int* printIntersection(int *arr1, int *arr2, int n, int *index)
{
	int i, j, min = -1;
	if (n < 0)
	{
		printf("invalid");
	}
	int *res = (int *)malloc(sizeof(int));
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr1[i] == arr2[j])
			{
				res[(*index)++] = arr1[i];
			}
		}
	}
	return res;
}
int main()
{
	int i, n, m, index = 0, *res = NULL;
	printf("Enter N value: ");
	scanf("%d", &n);

	int *arr1 = (int *)malloc(n*sizeof(int));
	int *arr2 = (int *)malloc(n*sizeof(int));
	printf("Enter Elements of Array1: ");
	for (i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	printf("Enter Elements of Array2: ");
	for (i = 0; i < n; i++)
		scanf("%d", &arr2[i]);
	res = printIntersection(arr1, arr2, n, &index);
	if (res == NULL)
	{
		printf("i");
	}
	else
	{
		printf(" Common Elements Are :");
		for (i = 0; i < index; i++)
		{

			printf("%d ", res[i]);

		}
	}
	getche();
	return 0;
}