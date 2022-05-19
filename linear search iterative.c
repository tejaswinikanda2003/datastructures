#include<stdio.h>
int linear_search(int *arr,int n,int s)
{
	int static x=0;
	if(arr[x]==s)
	return 1;
	else if(x==n-1)
	return 0;
	
	x++;
	linear_search(arr,n,s);
}
void main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int s;
	scanf("%d",&s);
	if(linear_search(arr,n,s))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
