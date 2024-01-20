/*
Write a C program to print all ASCII character with their values.
*/
#include<stdio.h>
int main(void)
{
	int i;
	
	
	//printf("Enter the character To print the ascii value : ");
	//scanf("%c",&a);
	
	i= '\0';
	while(i < 255)
	{
		printf("Ascii value of  %c = %d\n",i,i);
		i++;
	}
}

