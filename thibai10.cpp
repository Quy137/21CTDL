#include<stdio.h>

void nhapMang(int a[] , int &n) {
	n  = 0;
	int x;
	do {
		printf("Nhap 1 so nguyen co trong mang . Nhap 0 de ket thuc : ");
		scanf("%d" , &x);
		if ( x != 0) {
			a[n++] = x;
		}
	} while( x != 0);
}

void xuatMang(int a[] , int n) {
	for (int i = 0;i < n ; i++) {
		printf("%4d" , a[i]);
	}
}

long tongChan(int a[] , int n) {
	if(n == 0)
		return 0;
	if(a[n-1] %2 == 0)
		return tongChan(a , n-1) + a[n-1];
		return tongChan(a , n-1);
}

int main () {
	int n;
	int a[100];
	nhapMang(a,n);
	printf("\nmang vua nhap ");
	xuatMang(a,n);
	
	int tong = tongChan(a,n);
	printf("\n tong cac so chan co trong mang : %d ", tong);
	return 0;
}
