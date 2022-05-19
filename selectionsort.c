//selection sort
#include<stdio.h>
int max(int *arr,int n)
{
	int i,ind=0,me=arr[0];
	for(i=0;i<=n;i++)
	{
		if(arr[i]>me)
		{
			me=arr[i];
			ind=i;
		}
	}
	return ind;
}
int selection_sort(int *arr,int n)
{
	int i,temp,m;
	for(i=n-1;i>=0;i--)
	{
		m=max(arr,i);
		temp=arr[i];
		arr[i]=arr[m];
		arr[m]=temp;
	}
}
void main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
		
	printf(" %d",arr[i]);
	}
}
