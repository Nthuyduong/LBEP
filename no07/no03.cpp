#include <stdio.h>
int main(){
	//tim doan [a,b] tren truc so nguyen sao cho doan nay chua tat ca cac gia tri mang n
	int n;
	printf("Nhap so luong phan tu n = ");
	scanf("%d",&n);

	int i,a[n];
	for(i=0;i<n;i++){
		printf("nhap gia tri %d = \n",i);
		scanf("%d",&a[i]);
	}

	int max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}

	int min=a[0];
	for(i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}printf("doan [a,b] can tim la: [%d,%d]",min,max);
}
	