/*
Write a C program to enter a number and print its reverse.
*/
#include<stdio.h>
int main (void)
{
	int i,x,r,sum=0,temp;
	
	printf("Enter number :");
	scanf("%d",&x);
	
	temp = x;
	
	i=0;
	while(x!=0)
	{
		r = x%10;
		sum = sum*10 + r;
		x/=10;
		//printf("x = %d\n",x);
		//printf("sum = %d\n",sum);
		i++;
	}
	//for line
	printf("\n");
	
	printf("\t\t\t\tThe Original number is = %d\n",temp);
	printf("\t\t\t\tThe reverse of  number is = %d\n",sum);
}
