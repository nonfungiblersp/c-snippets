/*
Write a C program to print all natural numbers from 1 to n. – using while loop
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
		i=n;
		while(i!=0)
		{
			printf("%d\n",i);
			i--;
		}		
	}
}
