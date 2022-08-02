#include <stdio.h>
int main(){
	//Tim so le cuoi cung cua mang
	int n;
	printf("Nhap so luong phan tu n = ");
	scanf("%d",&n);

	int i,a[n];
	for(i=0;i<n;i++){
		printf("Nhap phan tu thu %d = \n",i);
		scanf("%d",&a[i]);
	}
	//
	for(i=n-1;i<n;i--){
		if(a[i]%2!=0){
			printf("So le cuoi cung cua mang n = %d",a[i]);
			break;
		}
	}
}	