// Online C compiler to run C program online
#include <stdio.h>

#include <stdlib.h>

int main() {
    int n;
    printf("Enter n (max no. in sequence) :");
    scanf("%d", &n);

    int size = n - 1;
     int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    long long expected_sum = (long long)n * (n + 1) / 2; 
    long long actual_sum = 0;

    for (int i = 0; i < size; i++) {
        actual_sum += arr[i];
    }

    printf("Missing number: %lld\n", expected_sum - actual_sum);

    return 0;
}
