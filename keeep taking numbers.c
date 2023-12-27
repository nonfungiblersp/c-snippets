/*
keep taking numbers as input from user  multiple until
user enter a number which is multiple of 7.
*/

#include<stdio.h>
int main (void)
{
	int n;
	do 
	{
		printf ("Enter number: ");
		scanf("%d",&n);
		printf("%d\n",n);
		
		if (n % 7 == 0)
		{
			break;
		}	
	}while(1);
	printf("namste tata bai bai");
	return 0;
}
