#include<stdio.h>

int tkNhiPhan(int a[], int l, int r , int x) {
	int mid;
	while(l<= r) {
		mid = (l+r)/2;
		if (a[mid]==x) 
			return mid;
		if (x>a[mid])
			l = mid + 1;
		else 
			r = mid - 1;
	}
	return -1;
}

int main() {
	int arr[] = {2,3,4,10,40};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	
	int kq = tkNhiPhan(arr,0,n-1,x);
	printf("Vi tri %d : %d", x , kq);
}
