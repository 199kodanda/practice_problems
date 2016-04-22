/* given an array of unsorted elements.. Find min and max elemnets among them*/

#include<stdio.h>
#include<conio.h>
void fun(int *a,int n,int *arr)
{
	int i,min=a[0],max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	arr[0]=max;
	arr[1]=min;
}
void main()
{
	int n,*a,i;
	printf("Enter Array Size: ");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("Enter Array: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	fun(a,n);
	printf("Max: %d\n",a[0]);
	if(a[0]==a[1])
		printf("Max and Min are same..!");
	else
		printf("Min: %d ",a[1]);
	getch();
}