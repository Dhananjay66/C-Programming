#include <stdio.h>

int main() {
    int a[100], temp, dim, i, j;
    printf("Enter the dimension of the array: ");
    scanf("%d", &dim);
    
    // Input array elements
    for (i = 0; i < dim; i++) {
        printf("Enter the element for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Reverse the array
    for (i = 0, j = dim - 1; i < j; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    // Print the reversed array
    printf("\nElements after reversing:\n");
    for (i = 0; i < dim; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

