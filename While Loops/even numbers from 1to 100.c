/*
Write a C program to print all even numbers between 1 to 100. – using while loop.
*/
#include<stdio.h>
int main(void)
{
	int x =100 ,i;
	i=1;
	while(i<=x)
	{
		if(i%2 == 0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
