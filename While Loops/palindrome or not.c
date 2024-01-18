/*
Write a C program to check whether a number is palindrome or not.
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
		i++;
	}
	//for line
	printf("\n");

	if(temp == sum)
	{
		printf("\t\t\t\tThe %d number is Palindrome\n",temp);
	}
	else
	{
		printf("\t\t\t\tThe %d number is not Palindrome\n",temp);
	}
}
