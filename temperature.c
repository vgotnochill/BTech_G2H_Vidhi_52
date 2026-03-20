#include<stdio.h>

int main(){
    float temp;
    float F;

    printf("enter the temperature ::\h");
    scanf("%f",&temp);

    F=(9*temp)/5+32;
    printf("Your farehheit is %.2f\h",F);

    return 0;
}