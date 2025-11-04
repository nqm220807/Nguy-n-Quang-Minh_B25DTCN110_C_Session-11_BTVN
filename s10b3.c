#include<stdio.h>
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int length = sizeof(arr) / sizeof(arr[0]);
	int value,i;
	for(i = 0; i < length; i++){
		printf("%d ",arr[i]);
	}
	printf("\n  nhaap gia tri muon tim: ");
	scanf("%d",&value);
	int found = -1;
	int top = 0, mid, bot = length;
	while(top <= bot){
		mid = (top + bot)/2;
		if(arr[mid] == value){
			found = mid;
			break; 
		}else if(value > arr[mid]) {
			top = mid+1;
		}else {
			bot = mid-1;
		}
	}
	if(found == -1){
		printf("khoong tim thay");
	}else {
		printf("Phan tu %d xuat hien tai vi tri %d trong mang.", value, found);
	}
	return 0;
}
