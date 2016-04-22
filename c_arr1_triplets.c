/*Given an array of N numbers ,Find All Triplets whose sum equal to a integer K ? 
{0,2,3,4,5,6} and K=10 ,gives output as {5,3,2} ,{6,3,1} ,{0,4,6} .
Dont print All permutations of same Triplet like {0,4,6} ,{6,4,0 } etc .Print any 1 .*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int* triplets(int *arr, int len, int sum, int *index)
{
	int *buf;
	buf = (int*)malloc(len*sizeof(int));

	if (len >= 3){
		for (int i = 0; i < len; i++)
		{
			for (int j = i + 1; j < len; j++)
			{
				for (int k = j + 1; k < len; k++)
				{
					if (arr[i] + arr[j] + arr[k] == sum)
					{
						buf[(*index)++] = arr[i];
						buf[(*index)++] = arr[j];
						buf[(*index)++] = arr[k];
					}
				}
			}
		}
		return buf;
	}
	else
		return NULL;
}
void main()
{
	int *arr = NULL, N, i, *res = NULL, sum, index = 0;
	printf("Enter no. of Elements:");
	scanf("%d", &N);
	if (N < 0)
		printf("invalid");
	else{
		arr = (int*)malloc(N*sizeof(int));
		printf("Enter Array ELements:");
		for (i = 0; i < N; i++)
			scanf("%d", &arr[i]);
		printf("Enter Sum:");
		scanf("%d", &sum);
		int *res = triplets(arr, N, sum, &index);

		if (res != NULL)
		{
			printf("Triplets Present Are:");
			for (i = 0; i < index; i++)
			{

				printf("%d ", res[i]);

			}
		}
		else
			printf("No Triplets");

	}
	_getch();
}
