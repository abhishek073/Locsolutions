#include<stdio.h>


int main()
{
    int a,b;
    int x;
    
    
    scanf("%d %d",&a,&b);
    
    scanf("%d",&x);
    switch(x)
    {
    case 1    :
        printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
    case 2    :
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    case 3    :
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4    :
        printf("Division of Two Numbers is %d : ",a/b);
        break;
    default    :
        printf(" Enter Your Correct Choice.");
        break;
    }
    return 0;
}