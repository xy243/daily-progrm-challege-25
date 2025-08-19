#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int leaders[n];
    int count = 0;

    int max_from_right = arr[n - 1]; 
    leaders[count++] = max_from_right;

  
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            leaders[count++] = max_from_right;
        }
    }
    printf("Leaders are : ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");

    return 0;
}
