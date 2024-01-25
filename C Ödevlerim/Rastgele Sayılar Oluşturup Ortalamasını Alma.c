#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
int a[10];
float toplam=0; //Rastgele sayılar oluşturma
  srand(time(NULL));
 
  for(int i=0;i<=9;i++) {//Rastgele sayıların ortalamasını alma
  a[i]=1+rand()%100;
    toplam=toplam+a[i];
   printf("%d\t",a[i]);
    }
printf("\nSayıların Ortalaması : ""%0.2f\n",toplam/10);
  //Ekrana Yazdırma
  return 0;
}
