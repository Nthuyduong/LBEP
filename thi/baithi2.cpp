#include<stdio.h>
#include<string.h>
void upperCase(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97 && s[i]<=122){
			s[i]-=32;
		}
	}
}
int main(){
	char s1[20];
	printf("Enter string: ");
	scanf("%s",s1);
	
	upperCase(s1);
	printf("Upper case string: %s",s1);
	
}