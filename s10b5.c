#include <stdio.h>

int main() {
    int n, i, value, count = 0;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Nhap mang arr[%d]: ", i);
		scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);
    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++; 
        }
    }
    if (count == 0) {
        printf("Khong tim thay phan tu %d trong mang.\n", value);
    } else {
        printf("Phan tu %d xuat hien %d lan trong mang.\n", value, count);
    }
    return 0;
}

