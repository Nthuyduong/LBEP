//Nhap mang n, tim gia tri x sao cho doan [-x,x] chua tat ca gia tri trong mang
#include <stdio.h>
#include <math.h>
int main(){
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
	}

	int x;
	if(abs(min)>max){
		printf("gia tri cua x la: %d",abs(min));
	}
	else{
		printf("Gia tri cua x la: %d",max);
	}
}
