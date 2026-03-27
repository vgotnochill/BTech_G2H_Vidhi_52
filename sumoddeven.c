#include <stdio.h>

void main()
{
    int i,n,sumeven=0,sumodd=0;
    printf("Enter number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sumeven=sumeven+i;
        }
        else
        {
            sumodd=sumodd+i;
        }
    }
    printf("\n sum of even numbers=%d",sumeven);
    printf("\n sum of odd numbers=%d",sumodd);
}
    
