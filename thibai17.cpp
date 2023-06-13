#include<stdio.h>

void nhapMang(float a[] , int &n) {
	n  = 0;
	float x;
	do {
		printf("Nhap 1 so nguyen co trong mang . Nhap 0 de ket thuc : ");
		scanf("%f" , &x);
		if ( x != 0) {
			a[n++] = x;
		}
	} while( x != 0);
}

void xuatMang(float a[] , int n) {
	for (int i = 0;i < n ; i++) {
		printf("%8.3f" , a[i]);
	}
}

long tong(float a[] , int n) {
	if(n == 0)
		return 0;
	return tong(a , n-1) + a[n-1];
	return tong(a, n-1);
}

int main () {
	int n;
	float a[100];
	nhapMang(a,n);
	printf("\nmang vua nhap ");
	xuatMang(a,n);
	
	int kq = tong(a,n);
	printf("\n tong cac so  co trong mang : %d ", kq);
	return 0;
}
