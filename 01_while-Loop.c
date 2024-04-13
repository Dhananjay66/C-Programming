#include <stdio.h>

int main() {
    int n1,n2;
    printf("Enter the value of n1 and n2 : ");
    scanf("%d%d",&n1,&n2);
    if(n1<n2)
    {
        while(n1<=n2)
        {
            printf("%d\n",n1);
            n1++;
        }
    }
    else
    {
        while(n1>=n2)
        {
            printf("%d\n",n1);
            n1--;
        }
    }
    return 0;    // next statement
}
