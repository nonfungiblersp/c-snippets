/*
Write a C program to print all natural numbers in reverse (from n to 1). – using while loop
*/
#include<stdio.h>
int main(void)
{
	int n,i;
	printf("Enter n = ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("Invalid input !!!");
	}
	else
	{
		i=1;
		while(i>=n)
		{
			printf("%d\n",i);
			i--;
		}
		
	}
}
