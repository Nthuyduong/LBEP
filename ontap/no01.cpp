#include <stdio.h>
//nhap n tinh tong s=1+1/2+...+1/n
int main(){
	int n;
	printf("Nhap gia tri cua n = ");
	scanf("%d",&n);

	int i;
	float s=0;
	for(i=1;i<=n;i++){
		s+=1/(float)i;
	}printf("Tong s = %.2f",s);
}
