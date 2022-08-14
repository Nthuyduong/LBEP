//nhap mang n so nguyen dam bao so khong trung nhau
#include <stdio.h>
int main(){
	int n;
	printf("Nhap gia tri cua n = ");
	scanf("%d",&n);

	int i, a[n];
	printf("Nhap mang:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				printf("Vui long nhap lai");
				break;
			}
		}
	}printf("Mang khong co gia tri nao trung nhau");
}