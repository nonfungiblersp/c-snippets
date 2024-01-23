/*
Write a C program to find all factors of a number.
*/
#include<stdio.h>
int main (void)
{
	int x,y,i,temp,fact,countfact;
	
	printf("Enter your number : ");
	scanf("%d",&x);
	
	temp = x;
	
	for(i=1;i<=x;i++)
	{
		y = x/i;
		fact = temp%y;
		if(fact == 0)
		{
			printf("factor of %d = %d\n",temp,y);
			if(y == 1)
			{
				break;			
			}
		}	
	}	
}
