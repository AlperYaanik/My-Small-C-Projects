#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zar(void);
int main() {
srand(time(NULL));
int dizi[2];
dizi[0]=zar();
printf("1.zar= %d\n",dizi[0]);
  //1.zarın 7 veya 11 olduğunda kazandığı durum
  if(dizi[0]==7||dizi[0]==11){
  puts("You win");
}
//1.zarın 2,3 veya 12 olduğunda kaybettiği durum
else if(dizi[0]==2||dizi[0]==3||dizi[0]==12){
puts("Barbut");  
}
else{//Diğer Durumlar için 7 Gelirse Barbut; İlk attığın tekrarden gelirse galip olunur.
  do{
   dizi[1]=zar();
  printf("Yeni Zar= %d\n",dizi[1]);
    if(dizi[1]==7){puts("Barbut"); return 0;} 
  }
  while(dizi[1]!=dizi[0]);
   puts("You Win");
  }

  }

int zar(void){//Zar atma fonksiyonu
  int roll1=1+rand()%6;
  int roll2=1+rand()%6;
  return roll1+roll2;
}
