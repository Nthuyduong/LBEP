//nhap mang n, dao nguoc phan tu trong mang
#include <stdio.h>
int main(){
	int n;
	printf("Nhap gia tri n = ");
	scanf("%d",&n);

	int i, a[n];
	for(i=0;i<n;i++){
		printf("Nhap phan tu thu %d\n",i);
		scanf("%d",&a[i]);
	}

	for(i=n-1;i>=0;i--){
		printf(%d",a[i]);
	}

}