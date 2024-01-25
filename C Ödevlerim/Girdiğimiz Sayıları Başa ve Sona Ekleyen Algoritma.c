#include <stdio.h>
#include <math.h>
int func1();

int main(void) {//Girdilerin Alınması
 int sonuc,x,y;
  printf( "Öne Arkaya eklenecek sayıyı giriniz\n");
  scanf("%d",&x);
  printf("Pasif Sayıyı girinz\n");
  scanf("%d",&y);
sonuc=func1(y)*x+y;
sonuc=func1(x)*sonuc+x;
printf("%d",sonuc);
 
  }

int func1(int z){//Basamak Sayısını Bulmak
int num,i=0;

  while (z!=0){
 z=z/10;
  i++;}
 
  
  return (pow(10,i));
}