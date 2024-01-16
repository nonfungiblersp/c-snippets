/*
Write a C program to print all alphabets from a to z. – using while loop
*/

#include<stdio.h>
int main(void)
{
	char i,j;
	i = 'a';
	while(i<='z')
	{
		printf("%c\n",i);
		i++;
	}
	
/*
	i = 'a';
	while(i<='z')
	{
		j='a'	;
		while(j<='z')
		{
			printf("%c",j);
			j++;
		}
		printf("\n");
		i++;
	}
*/
}
