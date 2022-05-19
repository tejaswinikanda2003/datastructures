#include<stdio.h>
int min(int a,int b)
{
	if(a>b)
	{
		return b;
	}
	return a;
}
int fibi_search(int *arr,int n,int se)
{
	int i,fib[n],L,M,K;
	L=-1,K=n-1;
	fib[0]=0,fib[1]=1;
	for(i=2;i<n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
/*	for(i=0;i<n;i++)  to check all the nubers in the array
	{
		printf("%d ",fib[i]);
	}
	printf("\n");*/
	while(fib[K-2]!=0)
	{
		//printf("%d %d %d\n",L,M,K);
		M=min(L+fib[K-2],n-1);
		if(se==arr[M] || arr[K]==se)
		{
			return 1;
		}
		else if(se>arr[M])
		{
			L=M;
			K=K-1;
		}
		else if(se<arr[M])
		{
			K=K-2;
			
		}
	}
	if(arr[K]==se)
	{
		return 1;
	}
	return 0;
}
void main()
{
	int n,i,se;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	if(fibi_search(arr,n,se))
	{
		printf("True");
	}
	else{
		printf("Fasle");
	}
}
/*
8 
        33 44 45 67 76 89 99 100
	    0   1   2   3   4   5   6   7
         	        K
	    0   1   1   2   3   5   8   13-->fibanochi                
L=3

m=min(L+fibanochi[k-2],n-1)-->2

se=68
se==arr[M]-->68==67 if it is true return 1;
se>arr[M]-->68>67 if it is true--> L=M  K=K-1
se<arr[M]--> 68<67  K=K-2
*/
