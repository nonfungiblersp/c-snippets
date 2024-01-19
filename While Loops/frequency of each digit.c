/*
Write a C program to find frequency of each digit in a given integer.
*/
#include <stdio.h>
#define BASE 10

int main()
{
    long long num, n;
    int i, lastDigit;
    int freq[BASE];

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%lld", &num);

    /* Initialize frequency array with 0 */
    i=0;
	while(i<BASE)
    {
		freq[i] = 0; 
		i++;
	}

    /* Copy the value of 'num' to 'n' */
    n = num;
    
    /* Run till 'n' is not equal to zero */
	while(n != 0)
    {
        /* Get last digit */
        lastDigit = n % 10;

        /* Remove last digit */
        n /= 10;

        /* Increment frequency array */
        freq[lastDigit]++;
    }

    /* Print frequency of each digit */
    printf("\nFrequency of each digit in %lld is: \n\n", num);
    i=0;
    while(i<BASE && freq[lastDigit] !=0)
    {

        printf("Frequency of %d = %d\n", i, freq[i]);
        i++;
    }
    return 0;
}



// code for count number of digits in the integer
/*
#include<stdio.h>
int main(void)
{
	int x,i,sum=0,r,temp,freq,count=0;
	
	temp=x;
	
	printf("Enter number : ");
	scanf("%d",&x);
	
	i=0;
	while(x!=0)
	{
		r = x%10;
		freq = r;
		
		if(r == freq)
		{
			count++;
		}
		x = x/10;
		i++;
	}
	printf("\nloop  baita %d\n",count);
}
*/
