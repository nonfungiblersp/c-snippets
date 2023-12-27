#include<stdio.h>

void main()
{
    int num;
    int count = 0;

    printf("Enter your number : \t ");
    scanf("%d",&num);

    while(num != 0)
    {
        num /= 10;
        count++;
    }
    printf("the count is : %d ", count);
}