#include<stdio.h>
void fun(int *arr,int n,int s)
{
	int i,x=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==s)
		{
			printf("True");
			x=1;
			break;
		}
	}
	if(x==0)
	{
		printf("False");
	}
}
void main()
{
	int n,s,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&s);
	fun(arr,n,s);
}
