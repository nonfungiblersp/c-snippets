/*
Write a C program to swap first and last digits of a number.
*/
#include<stdio.h>
int main(void)
{
	int a,b,c,temp,temp_1;
	
	printf("Enter the number : ");
	scanf("%d",&b);
	temp=b;
	c=1;
	a=1;
	while(a<=b)
	{
		b/=10;
		if(b > b/10 || b==0)
		{
			c++;
		}
		a++;
	}
	
	printf("The  First digit = %d \n",b);
	int last = temp%10;
	printf("The  Last  digit = %d \n",last);
	
	//swapped digits
	printf("\n");
	printf("The Swaped digits  are  : \n");
	
	int j=0;
	temp_1 = b;
	b = last;
	last = temp_1;
	
	printf("The  First digit = %d \n",b);
	printf("The  Last  digit = %d \n",last);
	
	
}

