#include<stdio.h>
int main(void)
{
	int i;
	for(i=1; i<10; i++)
	{
		if(i==6)
		{
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}
