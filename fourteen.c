#include <stdio.h>

void main()
{
    int i=1,r,aNum=0,num;
    for(i=1;i<=100;i++)
    {
        num=i;
        aNum=0;
        while(num=0)
        {
            r=num%10;
            aNum=aNum+r*r*r;
            num=num/10;
        
        }
        if(i==aNum){
            printf("Armstron Number=%d\n",i);
            
        }
    }

}
