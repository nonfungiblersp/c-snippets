/*
Write a C program to find sum of all natural numbers between 1 to n.
*/
#include<stdio.h>
int main(void)
{
	int x,i;
	int sum;
	
	printf("Enter n = ");
	scanf("%d",&x);
	
	
	i=1;
	while(i<x)
	{
		sum +=(i+1);
		i++;
	
	}
	printf(" Final sum = %d \n",sum);
	
	/*
		//for test put it inside the loop
		printf("sum = %d \n",sum);
		printf("i = %d\n",i);
	*/ 
}
