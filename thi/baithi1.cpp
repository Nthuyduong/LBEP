#include <stdio.h>
#include <math.h>
float area(float x, float y, float z){
	float P=(x+y+z)/2;
	float S=sqrt(P*(P-x)*(P-y)*(P-z));
	return S;
}
int main(){
	float a,b,c,S;

	printf("Nhap a =");
	scanf("%f",&a);

	printf("Nhap b =");
	scanf("%f",&b);

	printf("Nhap c =");
	scanf("%f",&c);

	if(a>0 && b>0 && c>0){
		if(a+b>c && b+c>a && c+a>b){
			S=area(a,b,c);
			printf("The area of the triangle = %.2f",S);
		}
		else{
			printf("ERROR");
		}
	}
	else{
		printf("ERROR");
	}
}