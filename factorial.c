#include<stdio.h>
int main(void)
{
	int i,n, fact = 1;
	printf("Enter number: ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		fact = fact*i;
	}
	printf("final factorial is : %d",fact);
	return 0;
}
