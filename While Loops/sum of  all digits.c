/*
Write a C program to calculate sum of digits of a number.
*/
#include<stdio.h>
int main (void)
{
	int i,a,sum,r;
	
	printf("Enter the Number : ");
	scanf("%d",&a);
	
	sum=0;
	i=0;
	while(a !=0)
	{
		r = a%10;
		sum +=r;
		a/=10;
		//printf("r = %d\n",r);
		//printf("sum = %d\n",sum);
		i++;
	}
	printf("The sum of all digits = %d\n",sum);
	return 0;
}
