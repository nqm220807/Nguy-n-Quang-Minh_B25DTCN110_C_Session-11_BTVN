#include <stdio.h>
int main() {
    int n;
     printf("Nhap so phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap du lieu trong mang tang dan\n") ;
    
	for (int i = 0; i < n; i++) {
		printf("Nhap mang arr[%d]: ", i);
	    scanf("%d", &arr[i]);
    }
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
        }
        else if (arr[mid] < value) {
            left = mid + 1; 
        }
        else {
            right = mid - 1;
        }
    }
    if (found == -1) {
        printf("Khong tim thay\n");
    } else {
        printf("Phan tu %d duoc tim thay tai chi muc %d\n", value, found);
    }
    return 0;
}

