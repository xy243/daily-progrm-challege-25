#include <stdio.h>
int main() {
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);

    int arr1[m], arr2[n];

    for (int i = 0; i < m; i++) scanf("%d", &arr1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &arr2[i]);

    int total = m + n;
    int gap = (total / 2) + (total % 2);  

    while (gap > 0) {
        int i, j;
        for (i = 0; i + gap < m; i++) {
            if (arr1[i] > arr1[i + gap]) {
                int temp = arr1[i];
                arr1[i] = arr1[i + gap];
                arr1[i + gap] = temp;
            }
        }
        for (j = (gap > m) ? gap - m : 0; i < m && j < n; i++, j++) {
            if (arr1[i] > arr2[j]) {
                int temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
            }
        }

        
        if (j < n) {
            for (j = 0; j + gap < n; j++) {
                if (arr2[j] > arr2[j + gap]) {
                    int temp = arr2[j];
                    arr2[j] = arr2[j + gap];
                    arr2[j + gap] = temp;
                }
            }
        }

       
        if (gap == 1) gap = 0;
        else gap = (gap / 2) + (gap % 2);
    }

    for (int i = 0; i < m; i++) printf("%d ", arr1[i]);
    for (int i = 0; i < n; i++) printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}
