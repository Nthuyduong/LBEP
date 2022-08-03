//nhap mang so nguyen n, tim chuoi so duong co tong max
#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong phan tu n = ");
	scanf("%d",&n);

	int i,a[n];
	for(i=0;i<n;i++){
		printf("nhap gia tri %d = \n",i);
		scanf("%d",&a[i]);
	}
	
	int c=0,max=0;
	for(i=0;i<n;i++){
		if(a[i]>0){
			c+=a[i];
			if(c>max){
				max=c;
			}
		}
		else{
			c=0;
		}
	}printf("chuoi so duong co tong max = %d",max);
}	