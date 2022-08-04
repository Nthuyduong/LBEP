#include <stdio.h>
#include <math.h>
int main(){
	//Nhap mang n vaf so x, tim gia tri xa gia tri x nhat
	int n;
	printf("Nhap so luong phan tu n = ");
	scanf("%d",&n);

	int i,a[n];
	for(i=0;i<n;i++){
		printf("nhap gia tri %d = \n",i);
		scanf("%d",&a[i]);
	}
	
	int x;
	printf("Nhap so x = ");
	scanf("%d",&x);

	int hieu = abs(x-a[0]);
	for(i=1;i<n;i++){
		if(abs(x-a[i])>hieu){
			hieu = abs(x-a[i]);
		}	
	}
	
	for(i=0;i<n;i++){
		if(abs(x-a[i])==hieu){
			printf("Gia tri gan x nhat la: %d",a[i]);
			break;
		}
	}

}
