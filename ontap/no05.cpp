//tim gia tri xuat hien nhieu nhat trong mang
#include <stdio.h>
int main(){
	int n;
	printf("Nhap gia tri cua n = ");
	scanf("%d",&n);

	int i, a[n];
	for(i=0;i<n;i++){
		printf("Nhap gia tri thu %d =",i);
		scanf("%d",&a[i]);
	}

	int s=0,max=0,gt;
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				s++;
				if(s>max){
					max=s;
					gt=a[i];
				}
			}
		}
	}printf("Phan tu xuat hien nhieu nhat trong mang la %d",gt);

}