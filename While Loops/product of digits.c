/*
Write a C program to calculate product of digits of a number.
*/
#include<stdio.h>
int main(void)
{
	int i,x,product=1,r;
	
	//Printf("Only Integers !!!");
	printf("Enter the number : ");
	scanf("%d",&x);
	
	i=0;
	while(x!=0)
	{
		r = x%10;
		product = product * r;
		x = x/10;
		i++;
	}
	printf("The product of digits = %d",product);
}
