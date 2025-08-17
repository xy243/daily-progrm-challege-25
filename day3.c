#include <stdio.h>

int findDuplicate(int arr[], int n) {
    int left = 1, right = n;
    int duplicate = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int count = 0;

       
        for (int i = 0; i <= n; i++) {
            if (arr[i] <= mid) {
                count++;
            }
        }

        if (count > mid) {
           
            duplicate = mid;
            right = mid - 1;
        } else {
          
            left = mid + 1;
        }
    }

    return duplicate;
}
int main() {
    int n;
    printf("Enter n (array size will be n+1): ");
    scanf("%d", &n);

    int arr[n+1];
    printf("Enter %d element :", n+1);
    for (int i = 0; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    int duplicate = findDuplicate(arr, n);
    printf("Duplicate number: %d\n", duplicate);

    return 0;
}
