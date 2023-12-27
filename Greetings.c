#include<stdio.h>

char Greetings(char ch);
int main()
{
	Greetings('a'); //a is just and constant no use for a
	return 0;
}


char Greetings(char ch)
{	
	printf("Enter your country name \n");
	printf("I for india \n ");
	
	printf("F for french\n");
	
	scanf("%c",&ch);
	
	if (ch == 'i' || ch == 'I')
	{
		printf("Namste");
	}
	else if (ch == 'F' || ch == 'f')
	{
		printf("Bonjour");
	}
}
