#include<stdio.h>
#include<math.h>
int main(){

    int n;
    float prin,rate,time;
    float SimInt;
    float ComInt;
    printf("Enter Principal,rate ,time,n:");
    scanf("%f %f %f %d",&prin,&rate,&time);
     
    SimInt=(prin*rate*time)/100;
    printf("Your Simple interes is :%2f,SimInt");

    ComInt=prin*pow((1+rate/(n*100)),(time*n));
    printf("Your Compound interest is :%.2f ComInt");

    return 0;
}