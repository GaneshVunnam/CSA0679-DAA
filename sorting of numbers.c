#include <stdio.h>
int main()
{
	int i,j,a,n,num[30];
	printf("enter no of elements :");
	scanf("%d",&n);
	printf("enter the elements :");
	for (i=0;i<n;++i)
	    scanf("%d",&num[i]);
	for (i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(num[i]>num[j])
			{
				a=num[i];
				num[i]=num[j];
				num[j]=a;
			}
		}
   }
   printf("the numbers are arranged in ascending order :");
   for(i=0;i<n;++i)
      printf("%d",num[i]);
}
