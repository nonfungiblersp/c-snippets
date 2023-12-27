#include<stdio.h>
int main (void)
{
	int i;
	for (i=0;i<5;i++)
	{
		if(i==3)
		{
			break;
		}
		printf("%d\n",i);
	}
	printf("End");
	return 0;
}

