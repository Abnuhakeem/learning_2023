#include <stdio.h>
 
int main()
{
    
    int n1 , n2 , max;
    printf("Enter the two numbers");
    scanf("%d %d",&n1 ,&n2);
     
    if (n1 > n2)
    {
        max=n1;
    }
    else
    {
        max=n2;
    }
    printf("Largest number between %d and %d is %d. ", n1, n2, max);
 
    return 0;
}