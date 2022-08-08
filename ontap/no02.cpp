#include <stdio.h>
//nhap n va kiem tra xem co phai so nguyen to khong
int main(){
	int n;
	printf("Nhap gia tri cua n = ");
	scanf("%d",&n);

	if(n>2){
		bool t =false;
		for(int i=2;i<n;i++){
			if(n%i==0){
				t=true;
				break;
			}
		}
		if(t){
			printf("n khong phai so nguyen to");
		}
		else{
			printf("n la so nguyen to");
		}
	}
	else{
		printf("n khong phai so nguyen to");
	}
}