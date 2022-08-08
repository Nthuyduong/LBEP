//tim so dung vi tri n trong day fibonacci
#include <stdio.h>
int main(){
	int n;
	printf("Nhap gia tri n = ");
	scanf("%d",&n);

	int a=0,b=1,f;
	for(int i=0;i<n;i++){
		f=a+b;
		b=a;
		a=f;
	}printf("So thu %d trong day fibonacci = %d",n,f);
}