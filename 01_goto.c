#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the value of x and y: ");
    scanf("%d%d", &x, &y);

    if (x > y) 
    {
        goto S1;
    } 
    else 
    {
        goto S2;
    }

S1: // Label for the "if" block
    printf("x : %d is larger.\n", x);
    goto S3; // Jump to the end

S2: // Label for the "else" block
    printf("y : %d is larger.\n", y);

S3: // End of program
    return 0;
}

