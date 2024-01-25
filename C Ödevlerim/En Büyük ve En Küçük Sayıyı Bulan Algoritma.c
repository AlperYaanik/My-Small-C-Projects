#include <stdio.h>

int main(void) {
  int num, most, less;

//Kullanıcı girişi alma kısmı
  for (int repeat = 1; repeat <= 5; repeat++) {
    printf("Lütfen Bir sayı giriniz!\n");
    scanf("%d", &num);
  
    if (repeat == 1) {//İlk sayıyı en büyük ve en küçük sayı olarak atar
      most = num;
      less = num;
    } else {

      if (num > most) {//En büyük sayıyı bulur
        most = num;
      } else if (num < less) {//En küçük sayıyı bulur
        less = num;
      }
    }
  }
  printf("En Büyük=" "%d\n", most);
  printf("En Küçük=" "%d\n", less);
  return 0;
}