#include<stdio.h>
int main(void)
{
	int i,n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	for(i=10; i>=1; i--)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	return 0;
}
