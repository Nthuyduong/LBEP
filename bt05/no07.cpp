#include <stdio.h>
	int main(){
		//Tinh tong cac chu so cua mot so nguyen a
		int n;
		printf("Nhap n = ");
		scanf("%d",&n);

		int i,s=0;
		while(n>0){
			i=n%10;
			s=s+i;
			n=n/10;
		}
		printf("Tong chu so cua so n = %d",s);
	}