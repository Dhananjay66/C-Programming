#include <stdio.h>

int main() {
    int r, c;

    for (r = 65; r <= 69; r++) 
    {
        for (c = r; c <= r + 4; c++) 
        {
            printf("%c ",c); 
        }
        
        printf("\n"); 
    }
    return 0;
}
