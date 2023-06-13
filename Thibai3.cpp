#include<stdio.h>

int tructiep(int a[], int n ) {
	for(int i = 0; i < n -1; i++) {
		for( int j = i +1; j < n; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main() {
	int a[] = {41,23,4,14,56,1};
	int length = sizeof(a)/sizeof(int);
	tructiep(a, length);
	printf("Mang sau khi sap xep \n");
	for (int i = 0; i < length ; i++){
		printf("%4d" , a[i]);
	}
}
