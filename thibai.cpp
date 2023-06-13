#include<stdio.h>


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
	int a[] = {41,23,4,14,56,1};
	int length = sizeof(a)/ sizeof(int);
	nhanh(a,0,length-1);
	printf("\nMang sau khi sap xep : ");
	for(int i = 0 ; i < length ; i++) {
		printf("%4d" , a[i]);
	}
	
}
