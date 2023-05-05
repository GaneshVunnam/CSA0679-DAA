#include<stdio.h>
int main()
{
	int arr[10]={1,3,2,33,42,51,23,43,30,91};
	int n=10;
	int i,j,position,swap;
	for(i=0;i<(n-0);i++)
	{
		position=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[position]>arr[j])
			position=j;
		}
		if(position !=i)
		{
			swap=arr[i];
			arr[i]=arr[position];
			arr[position]=swap;
		}
    }
	    for(i=0;i<n;i++)
	     printf("%d\t",arr[i]);
	     return 0;
}
			
