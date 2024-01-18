/*
Write a C program to enter a number and print its reverse.
*/
#include<stdio.h>
int main (void)
{
	int i,x,r,sum=0,temp;
	
	printf("Enter number :");
	scanf("%d",&x);
	
	temp = x;
	
	i=0;
	while(i<=x)
	{
		r = x%10;
		sum = sum*10 + r;
		x/=10;
		i++;
	}
	printf("The Original number is = %d\n",temp);
	printf("The reverse of  number is = %d\n",sum);
}
