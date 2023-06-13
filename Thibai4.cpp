#include<stdio.h>


void chen(int a[] , int n) {
	int c , b;
	for ( int i = 1 ; i < n ; i++) {
		c = i;
		b = a[i];
		while( c > 0 && a[c - 1] > b) {
			a[c] = a[c - 1];
			c--;
		}
		a[c] = b;
	}
}

int main() {
	int a[] = {41,23,4,14,56,1};
	int length = sizeof(a)/ sizeof(int);
	chen(a, length);
	printf("\nMang sau khi sap xep ");
	for(int i = 0; i < length ; i++) {
		printf("%4d" , a[i]);
	}
}
