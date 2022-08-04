#include <stdio.h>
int main(){
	//tim so duong nho nhat
	int n;
	printf("Nhap so luong phan tu n = ");
	scanf("%d",&n);

	int i,a[n];
	for(i=0;i<n;i++){
		printf("Nhap phan tu thu %d = \n",i);
		scanf("%d",&a[i]);
	}
	
	int min=a[0];
	for(i=0;i<n;i++){
		if(a[i]>0 && a[i]<min){
			min=a[i];
		}
	}printf("So duong nho nhat = %d",min);
}	