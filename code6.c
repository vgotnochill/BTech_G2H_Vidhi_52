#include<stdio.h>
int main(){

    int a,b;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);

    if(a==b)
    {
        printf("\n a and b are equal");
    }
    else
    {
        printf("\n a anb b are not equal");
    }
    return 0;
}