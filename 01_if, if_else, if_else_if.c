#include <stdio.h>

int main() {
    int x;
    printf("\nEnter the value for x : ");
    scanf("%d",&x);
    if(x>0)
    {
        printf("\n x = %d is +ve number.",x);
    }
    else if(x<0)
    {
        printf("\n x = %d is -ve number.",x);
    }
    else
    {
        printf("\n x = %d is Zero.",x);
    }
    printf("\n Program is completed...");
    return 0;
}
