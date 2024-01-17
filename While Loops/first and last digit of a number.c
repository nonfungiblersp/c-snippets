/*
Write a C program to find first and last digit of a number.
*/

#include<stdio.h>
int main(void)
{
	int a,b,c,temp;
	
	printf("Enter the number : ");
	scanf("%d",&b);
	temp=b;
	c=1;
	a=1;
	while(a<=b)
	{
		b/=10;
		if(b > b/10 || b==0)
		{
			c++;
		}
		a++;
	}
	
	printf("The  First digit = %d \n",b);
	printf("The  Last  digit = %d \n",temp%10);
}
