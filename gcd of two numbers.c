#include<stdio.h>
#include<stdio.h>
int main()
{
	int num1=5,num2=15;
	while(num1!=num2)
	{
		if(num1>num2)
		{
			num1=num1-num2;
		}
		else
		{
			num2=num2-num1;
		}
	}
	printf("GCD of twonumbers 5 and 15 is %d",num2);
}
