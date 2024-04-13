#include <stdio.h>

int main() {
    int num,n,sum=0,m;
    printf("Enter a number : ");
    scanf("%d",&num);
    n = num;
    while(n>0)    
    {    
        m = n % 10;    
        sum = sum + m;    
        n = n / 10;    
    }  
    printf("Sum of all digit of %d number is %d. ",num,sum);
    return 0;
}
