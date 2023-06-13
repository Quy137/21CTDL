#include<stdio.h>

void nhapMang(int a[], int &n) {
	n = 0;
	int x;
	do {
		printf("Nhap 1 gia tri so nguyen co trong mang . Nhap 0 de ket thuc :");
		scanf("%d", &x);
		if ( x!=0) {
			a[n++] = x;		
		}
	} while(x!=0);
}

void xuatMang(int a[], int n , int i = 0) {
	if (i==n)
		return;
	printf("%4d", a[i]);
	xuatMang(a,n,i+1);
}

int main () {
	int n;
	int a[100];
	nhapMang(a,n);
	printf("\nmang vua nhap ");
	xuatMang(a,n);

}
