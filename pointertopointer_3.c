#include<stdio.h>

//pass by value
void square (int n);
void _square (int* n);
int main (void)
{
	int num = 4;
	
	square(num);
	printf("the number = %d \n\n ",num);
	
	printf("the pointers \n ");
	_square (&num);
	printf("the number = %d \n ",num);
	
}


void square (int n)
{
	n *=n;
	printf("Square = %d \n",n);
}


void _square (int* n)
{
	*n = (*n) * (*n);
	printf("Square = %d \n",*n);
}
