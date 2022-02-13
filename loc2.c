#include<stdio.h>

int main(){
    int x, z;
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);
    if (x>y){
        printf("%d is greater", x);
    }
    else if(y>x){
        printf("%d is greater", y);
    }
    else{
        printf("Both the numbers are equal");
    }
    return 0;
}