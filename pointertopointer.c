#include<stdio.h>
int main (void)
{
	int i =5;
	int *ptr = &i;
	int **pptr = &ptr;
	int ***ppptr = &pptr;
	
	printf("i = %d \n",i);
	printf("*ptr = %d \n",*ptr);
	printf("**ptr = %d \n",**pptr);
	printf("***ppptr %d \n",***ppptr);
	printf(" %d \n\n");
	printf("&i %d \n",&i);
	printf("&ptr %d \n",&ptr);
	printf("&pptr %d \n",&pptr);
	
	
	printf("\n\n");
	printf("&i %u \n",&i);
	printf("&ptr %u \n",&ptr);
	printf("&pptr %u \n",&pptr);

	printf("\n\n");
	printf("&i %p \n",&i);
	printf("&ptr %p \n",&ptr);
	printf("&pptr %p \n",&pptr);
	
	
	
	
	printf("\n\n");
	
	int *pointer;
	printf("%p\n",*pointer);
	
	
	
	
	return 0;
}
