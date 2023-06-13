#include<stdio.h>

void nhapMang(int a[] , int &n) {
	n = 0;
	int x;
	do {
		printf("Nhap 1 so nguyen trong mang . Nhap 0 de ket thuc : ");
		scanf("%d", &x);
		if (x != 0) {
			a[n++] = x;
		}
	} while(x != 0);
}

void xuatMang(int a[], int n) {
	for ( int i = 0 ; i < n ; i++) {
		printf("%4d" , a[i]);
	}
}

void nhanh(int a[], int l , int r) {
	int p = a[(l + r) / 2 ];
	int i = l , j = r;
	while (i < j) {
		while(a[i] < p){
			i++;
		}
		while(a[j] > p){
			j--;
		}
		if (i <= j) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		} 
	}
	if (i < r){
		nhanh(a, i , r); 
	}
	if ( l < j){
		nhanh(a,l,j);
	}
}

int main() {
	int a[100], n;
	nhapMang(a,n);
	printf("Mang vua nhap : ");
	xuatMang(a,n);
	nhanh(a,0,n-1);
	printf("\nMang tang dan : ");
	xuatMang(a,n);
}
