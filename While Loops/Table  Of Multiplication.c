/*
Write a C program to print multiplication table of any number.
*/

#include<stdio.h>
int main(void)
{
	int x,y,i;
	y=10;
	
	printf("Which table you want\n");
	printf("Enter Number = ");
	scanf("%d",&x);
	
	i=1;
	while(i<=y)
	{
		printf("%d * %d = %d\n",x,i,x*i);
		i++;
	}
}
