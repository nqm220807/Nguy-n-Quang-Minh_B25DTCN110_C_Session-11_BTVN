#include <stdio.h>
int main() {
	int n;
    int arr[n];
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap mang arr[%d]: ", i);
		scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {  
        for (int j = 0; j < n-1-i; j++) { 
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j]; 
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep theo thu tu tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

