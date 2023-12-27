#include<stdio.h>
int main (void)
{
	//less time 
	int i,j,n,sum =0;
	//print the sum of natural numbers and it;s reverse order of it.
	printf("Enter the number : ");
	scanf("%d",&n);
	
	for (i=1 ,j=n; i<=n && j>=1 ;i++,j--)//natural numbers starts from 1 and they all are positive
	{
		printf("%d\n",j);
		sum += i;
	}
	printf("the sum is : %d \n",sum);
	return 0;
}
