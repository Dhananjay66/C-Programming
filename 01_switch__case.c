// Online C compiler to run C program online
#include<stdio.h>

int main() {
    // Write 
    int x,y,ch;
    printf("Enter the value of x and y : ");
    scanf("%d%d",&x,&y);
    printf("Choose any choice on operation as : \n");
    printf("1. Addition   2.Subtraction    3. Multiplication   4. Division\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            printf("%d + %d = %d",x,y,x+y);
        }
        break;
        case 2:
        {
            printf("%d - %d = %d",x,y,x-y);
        }
        break;
        case 3:
        {
            printf("%d * %d = %d",x,y,x*y);
        }
        break;
        case 4:
        {
            printf("%d / %d = %d",x,y,x/y);
        }
        break;
        default :
        {
            printf("INVALID OPERATION.....");
        }
    }
        
}
