#include <stdio.h>
#include <math.h>
int main(void) {
int a, b, d=1,e;
float c=1;

  for( a=1;c<=500&&a<500 ; a++){ 
        
    for( b=1;c<=500 ; b++){   //Pisagor üçgenlerini döngülerle bulma
      
      c=sqrt(a*a+b*b);  e=sqrt(a*a+b*b); 
      if(c<=500 && e==c && a<b){ 
        printf("%d-""%d-""%d\n",a, b ,e);}}
  c=0;
    }
  return 0;
}