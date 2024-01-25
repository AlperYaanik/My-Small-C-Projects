#include <stdio.h>

int main(void) {
int num, k ,a=0,sayı;
  printf("Lütfen 1 ile 19 arasında  tek bir sayı giriniz\n");
  scanf("%d",&sayı);
  
 if(sayı<=19 && sayı%2!=0){
  num=sayı;
   
  for(a=1;a<=sayı;a+=2){//Baklava Diliminin İlk Yarısı
   for(int j=0;j<=num/2; j++){printf(" ");}
   num-=2;
   
   for(int i=1;i<=a;i++){
     printf("*");
   }
    printf("\n");
     }
  num=2;

  for(a=sayı-2;a>=0;a-=2){//Baklava Diliminin İkinci Yarısı
    
    for(int j=1;j<=num;j++){printf(" ");}
   num++;
    for(int i=1;i<=a;i++){
     printf("*");
   }
    printf("\n");
     }
   }
else{main();}

  return 0;
 
  } 
