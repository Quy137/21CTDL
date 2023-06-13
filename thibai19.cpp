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


long max(float a[], int n) {
	if(n==0)
		return -1;
	if(n==1)
		return a[0];
	if(a[n-1] > max(a, n-1))
		return a[n-1];
	return max(a,n-1);
}

int main () {
	int n;
	float a[100];
	nhapMang(a,n);
	printf("\nmang vua nhap ");
	xuatMang(a,n);
	
	int kq = max(a,n);
	printf("\n so lon nhat trong mang  : %d ", kq);
	return 0;
}
