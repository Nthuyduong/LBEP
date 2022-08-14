#include <stdio.h>
int main(){
	//tinh tong nhung chu so cua mot so nguyen n
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);

	int k,m=0;
	while(n>0){
		k=n%10;
		m=m*10+k;
		n=n/10;
	}
	printf("So nghich dao la %d",m);
}
//tim chu so cuoi cung cua mot so nguyen n
//int n;
//printf("Nhap gia tri cua n = ");
//scanf("%d",&n);
//while(n/10>0){
	//n/=10;
//}
//printf("Chu so dau tien cua so nguyen n = %d",n);