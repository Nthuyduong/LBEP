#include <stdio.h>
int main(){
	//tinh trung binh cong so le trong mang n
	int n;
	printf("Nhap so luong phan tu n = ");
	scanf("%d",&n);

	int i,a[n];
	for(i=0;i<n;i++){
		printf("Nhap gia tri %d = \n",i);
		scanf("%d",&a[i]);
	}

	int c=0,s=0;
	for(i=1;i<n;i+=2){
		if(a[i]%2!=0){
			s+=a[i];
			c++;
		}
	}
	float avg=float(s/c);
	printf("Trung binh cong so le = %.2f",avg);
}	