#include<stdio.h>

int tkTuyenTinh(int arr[], int n, int x) {
	for (int i =0 ; i<n;i++) {
		if( arr[i]==x)
			return i;
	}
		return -1;
}

int main() {
	int arr[] = {2,3,4,10,40};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	
	int kq = tkTuyenTinh(arr, n , x );
	if (kq == -1) 
		printf("Khong co trong mang ");
	printf("Vi tri cua %d  trong mang : %d ", x, kq);
}
