/*
Write a C program to find sum of all odd numbers between 1 to n.
*/
#include<stdio.h>
int main(void)
{
	int x,i,sum;
	sum=0;
	
	printf("Enter the n = ");
	scanf("%d",&x);
	
	i=1;
	while(i<=x)
	{
		if(!(i%2==0))
		{
			sum +=i;
		}
		i++;
	}
	printf("Sum Of Oods = %d",sum);
}
