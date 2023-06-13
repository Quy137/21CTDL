#include<stdio.h>

long tich(int n) {
	if (n==0)
		return 1;
	return tich(n-1) * n;
}

int main() {
	int n;
	printf("Nhap n can tinh : ");
	scanf("%d" , &n);
	tich(n);
	printf("Ket qua : %d " , tich(n)	);
	return 0;
}
