/* Input: Array A, integer key
# Output: first index of key in A 
# or -1 if not found 
Algorithm: Linear_Search
for i = 0 to last index of A: 
 if A[i] equals key:
 return i
return -1
*/
#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int key,i,temp;
    int A[9] = {1,2,3,4,5,6,7,8,9};

    printf("Entery the key to search : ");
    scanf("%d",&key);

    for (i=0;i < 9;i++)
    {
        A[0] = temp;
        temp = A[i];

        
    }
    if (temp == key)
    {
        printf("The index number in which the key value is : %d",i);
    }
}