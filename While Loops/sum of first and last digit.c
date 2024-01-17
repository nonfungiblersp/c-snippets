/*
Write a C program to find sum of first and last digit of a number.
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
	int last = temp%10;
	printf("The  Last  digit = %d \n",last);
	
	int sum = b + last;
	printf("The sum of First and Last digit = %d \n",sum);
}

