#include <stdio.h>

int main()
{
    int n,i;
    int a=0,b=1,next;
    
    
    printf("Enter number of terms:");
    scanf("%d",&n);
    
    printf("Fibonaci Series:");
    for(i=0;i<=n;i++){
        printf("%d",&a);
        int next=a+b;
        a=b;
        b=next;
    }
    return 0;
}
