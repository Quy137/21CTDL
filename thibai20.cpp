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

void sapxep(float a[] , int n) {
	if(n==1)
		return;
	sapxep(a , n-1);
	if(a[n-1] < a[n-2]){
		float temp = a[n-1];
		a[n-1] = a[n-2];
		a[n-2] = temp;
		sapxep(a , n-1);
	}
}

int main() {
	int n;
	float a[100];
	nhapMang(a,n);
	printf("\nmang vua nhap ");
	xuatMang(a,n);
	sapxep(a,n);
	printf("\nMang sau khi sap xep :");
	xuatMang(a,n);
}

