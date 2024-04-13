// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,f1=0,f2=1,f3;
    printf("Enter any term : ");
    scanf("%d",&n);
    printf("Fibonacci Sequence : %d\t%d",f1,f2);
    n = (n-2);
    while(n!=0)
    {
        f3 = f1 + f2;
        printf("\t%d",f3);
        f1 = f2;
        f2 = f3;
        n--;
    }
    return 0;
}
