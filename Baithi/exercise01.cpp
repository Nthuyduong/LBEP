#include <stdio.h>
#include <string.h>

int main () {
   int a;
   printf (" input integer len of string S1: \n");

   do{                                             // kiem tra chieu dai chuoi 1 co <0 ko
	    scanf("%d", &a);
	    if (a<=0 ){
	    	printf ("a need > 0 \n ");
		} 
   }
   while (a<=0);
   char s1[a];
   printf (" input string S1: \n");
   scanf("%s", s1);                                  // nhap chuoi 1
    int b;
   printf (" input integer len of string S2: \n");   // gia tri chiue dai chuoi 2
   do {                                              // kiem tra chieu dai chuoi 2 co <0 ko                
    scanf("%d", &b);
    if (b<=0 ) { printf (" y need > 0 \n ");
    } 
   } while (b<=0);
   char s2[b];
   printf (" input string S2: \n");
   scanf("%s",s2);                                 // nhap chuoi 2
   
   if ( strlen(s1) > strlen(s2)) {                                   //  neu chuoi 1 dai hon chuoi 2, dao chieu
        char stemp[a];
        strcpy(stemp,s2);
        strcpy(s2,s1);
        strcpy(s1,stemp);
   }
   bool  T = false;
 int i = 0;
  while ( s2[i] != 0){                     //khi nao s2 chua het thi con va
   if ( s2[i] == s1[0]) {
    int j = 0;
    while( s1[j] != 0 && s2[i] != 0 && s1[j] == s2[i]){
     i++;
     j++;
    }
    if( s1[j] == 0) {
     T = true;
     break;
    }
   } else { 
    i++;}
  }
   if (T) { 
   printf ("YES");
   } else { 
    printf ("NO");
   }
  return 0; 
}