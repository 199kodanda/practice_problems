/*Given an unsorted array of numbers ranging from 1 to 500 .
Now one element in the array is changed to 0 ,Find that element ?*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fix0element(int *arr, int n)
{
	if (arr == 0)
	{
		printf("invalid");
	}
	int i;
	int *buffer = (int *)malloc(n*sizeof(int));
	for (i = 0; i < n; i++)
	{
		buffer[arr[i]] = 1;/*marking each element between 1 to 500 found in arr with 1*/
	}
	for (i = 0; i < n; i++)
	{
		if (buffer[i] != 1)
			return i;
		else
			return 0;
	}
}
void main()
{
	int n=5, *arr,changedNumber, i;
	arr = (int *)malloc(n*sizeof(int));
	printf("Enter Array: ");
	for (i = 0; i<n; i++)
		scanf("%d", &arr[i]);
	changedNumber = fix0element(arr, n);
	if (changedNumber == 0)
	{
		printf("No Element Is Changed");
	}
	else

	printf("fixed element is %d", changedNumber);
	
	getch();
}