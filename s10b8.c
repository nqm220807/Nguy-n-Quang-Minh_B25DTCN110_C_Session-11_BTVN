#include <stdio.h>
int main() {
    int n;
     printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap mang arr[%d]: ", i);
	    scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) { 
            break;
        }
    }
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int value;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);
    int left = 0, right = n - 1;
    int found = -1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == value) {
            found = mid;
            break;
        } else if (arr[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (found == -1) {
        printf("Khong tim thay phan tu trong mang.\n");
    } else {
        printf("Chi so cua phan tu can tim: %d\n", found);
    }
    return 0;
}

