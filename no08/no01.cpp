#include <stdio.h>
//Tinh tong chu so cua 1 so nguyen n
int sum(int n){
	int i,s=0;
	while (n>0){
		i=n%10;;
		s=s+i;
		n=n/10;
	}return s;
}
//tinh chu vi tam giac
int tinhchuvi(int a, int b, int c){
	int p= a+b+c;
	return p;
}
//tim uoc chung max cua 2 so
int uocmax(int a, int b){
	int u;
	for(u=a;u<=a;u--){
		if(a%u==0 && b%u==0){
			return u;
		}
	}return u;
}
//Tim boi chung nho nhat cua 2 so
int boichungmin(int c, int d){
	int i;
	for(i=c;i<=c*d;i++){
		if(i%c==0 && i%d==0){
			return i;
		}
	}return i;
}
