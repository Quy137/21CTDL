#include<stdio.h>


void chon (int a[] , int n) {
	int min;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for ( int j = i+1 ; j < n ; j++) {
			if (a[min] > a[j]){
				min = j;			
			}
		}
		if ( i != min) {
			int temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
}

int main() {
	int a[] = {41,23,4,14,56,1};
	int length = sizeof(a)/ sizeof(int);
	chon(a,length);
	printf("Mang sau khi sap xep \n");
	for ( int i = 0; i < length; i++) {
		printf("%4d" , a[i]);
	}
}
