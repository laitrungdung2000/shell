#include<stdio.h>

int main() {
	int n, tong, m;
	tong = 0;
	printf("Nhap 1 so bat ky: ");
	scanf("%d", &n);
	while(n>0)
	{
		m = n%10;
		tong=tong + m;
		n = n/10;
	}
	printf("Tong cac chu so la: %d\n", tong);
	
	return 0;
}
