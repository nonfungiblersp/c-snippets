/*
Write a C program to find power of a number using for loop.
*/
#include<stdio.h>
int main (void)
{
	
	/*
	let x is base , let y is power
	there for we have to find x^y.
	*/
	
	int x,y,i,j;
	int tempb ,tempp;
	
	while(1)
	{
		printf("Enter Base x = ");
		scanf("%d",&x);
	
		printf("Enter the Power y = ");
		scanf("%d",&y);
		tempb = x,tempp = y;
		printf("\n");
		for(i=1;i<=y;i++)
		{
			for(j=y+1;j!=2;j--,y--)
			{
				x*=tempb;
				printf("y = %d , x = %lld\n",y,x);
				if(y=0)
				{
					break;
				}
				
			
			}
		}
		printf("\n");	
		printf("The %d with power %d  = %d\n\n\n",tempb,tempp,x);
		
		i++;
	}
	return 0;
}
