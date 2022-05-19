#include<stdio.h>
int main()
{
	int size,i,a[size],se,low,mid,high,flag=0;
	printf("enter size");
	scanf("%d",&size);
	printf("enter se");
	scanf("%d",&se);
	printf("enter elements");
	for(i=0;i<size;i++)
	{
	scanf("%d",&a[i]);
    }
    low=0;
    high=size-1;
    while(low<=high)
    {
    	mid=(low+high)/2;
    	if(a[mid]==se)
    	{
    		flag=1;
    		break;
		}
		else if(a[mid]<se)
		{
		low=mid+1;	
		}
		else 
		{
			high=mid-1;
		}
	}
	if(flag==1)
	{
	printf("element found");
	}
	else
	{
		printf("not found");
	}
}








