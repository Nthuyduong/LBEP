#include <stdio.h>
int main(){
	//tim xem x co thuoc mang so n hay khong
	int n;
	printf("Nhap so luong phan tu n = ");
	scanf("%d",&n);

	int i,a[n];
	for(i=0;i<n;i++){
		printf("nhap gia tri %d = \n",i);
		scanf("%d",&a[i]);
	}
	
	int x;
	printf("Nhap so x = ");
	scanf("%d",&x);

	for(i=0;i<n;i++){
		if(a[i]==x){
			printf("x thuoc mang n");
			break;
		}
	}
	//den het mang van khong thay x thi hien thi x khong ton tai trong mang n
	if(i==n){
		printf("x khong thuoc mang n");
	}
}	