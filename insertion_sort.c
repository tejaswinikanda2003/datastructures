#include<stdio.h>
void insertion_sort(int *arr,int n)
{
	int i,temp,j;
	for(i=1;i<n;i++)
	{
		j=i-1;
		while(arr[i]<arr[j])
		{
			temp=arr[i];	
			while(temp<arr[j])
			{
				arr[j+1]=arr[j];
				arr[j]=temp;
				j--;
			}
		}
	}
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
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

