#include <stdio.h>
#include "function.h"
int main(){
//tinh tong chu so cua 1 so nguyen n
	int x=40;
	int s=sum(x);
	printf("Tong chu so cua so nguyen n = %d\n",s);
//tinh chu vi tam giac
	int x1=5,y1=10,z1=8;
	int cv=tinhchuvi(x1,y1,z1);
	printf("Chu vi tam giac = %d\n",cv);
//tim uoc chung max
	int x2=20,y2=42;
	int uc;
	uc=uocmax(x2,y2);
	printf("Uoc chung max cua %d và %d = %d\n",x2,y2,uc);
//tim boi chung nho nhat
	int x3=24,y3=12;
	int bc;
	bc=boichungmin(x3,y3);
	printf("Boi chung nho nhat cua %d và %d = %d",x3,y3,bc);
}
