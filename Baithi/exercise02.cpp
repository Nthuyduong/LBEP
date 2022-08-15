#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap gia tri cua n = ");
	scanf("%d",&n);

	int i,arr[n];
	for(i=0;i<n;i++){
		printf("Nhap gia tri thu %d = ",i);
		scanf("%d",&arr[i]);
	}

	bool t=false;
	for(i=0;i<n;i++){
		for(int j=2;j<=sqrt(arr[j]);j++){
			if(arr[i]%j==0){
				t=true;
			}
			else{
				t=false;
			}
		}
	}
	if(t==true){
		printf("Co so nguyen to trong mang");
	}
	else{
		printf("Khong co so nguyen co");
	}
}