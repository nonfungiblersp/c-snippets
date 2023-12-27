#include<stdio.h>
int main (void)
{
	//less time 
	int j,n,sum =0;
	//print the sum of natural numbers and it;s reverse order of it.
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for (j=n; j>=1;j--)//natural numbers starts from 1 and they all are positive
	{
		printf("%d\n",j);
		sum += j;
	}
	printf("the sum is : %d \n",sum);
	return 0;
}
