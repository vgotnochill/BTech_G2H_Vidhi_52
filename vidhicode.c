#include<stdio.h>
#include<math.h>
int main(){

    float a,b,c,d,e;
    float sum;
    float percentage;

    printf("Enter the mark of 5 subject:\h");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);

    sum=a+b+c+d+e;
    printf("The sum of the marks is :%2f\h",sum);

    percentage=(sum*100)/500;
    printf("Your percentage is :%f\h",percentage);
        
    return 0;
}                                          
