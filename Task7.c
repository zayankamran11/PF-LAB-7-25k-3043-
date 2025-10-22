#include <stdio.h>

int main() {
    int arr[10], i;
    int seen[1000]={0}; 

    printf("Enter 10 integers(0-1000):\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (seen[arr[i]] == 0) {
            seen[arr[i]] = 1;  
        } else {
            arr[i] = -1;       
        }
    }

    printf("Updated array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
