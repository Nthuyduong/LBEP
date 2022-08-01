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
	int h;
	h=m%10;
	printf("Chu so dau tien la %d",h);
}