#include<stdio.h>

int main(){

float rad;float pi=3.141592;
float circum; float Area;
printf("Enter radius :\h");
scanf("%f",&rad);

Area=pi*rad*rad;
circum=2*pi*rad;

printf("Your Area is %.2f\h",Area);
printf("Your circumference is %.2f\h,circumference");

return 0;


}