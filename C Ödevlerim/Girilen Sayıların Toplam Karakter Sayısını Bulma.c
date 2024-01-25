#include <stdio.h>//Kütüphaneleri Ve Fonksiyonları tanımlama
#include <stdlib.h>
#include <time.h>
int basamak(int num);

int main(void) {
  srand(time(NULL));
  printf("%-20s", "Değer");
  puts("Toplam Karakter Sayısı");
  int dizi[10];
  int sayı3 = 0;
  for (int i = 1; i <= 10; i++) {//10 tane sayı üret
    int sayı = 1 + rand() % 100;
    dizi[i - 1] = sayı;
    printf("%-19d", sayı);

    int sayı2 = basamak(sayı);//Basamak Fonksiyonunu Çağırır
    sayı3 = sayı3 + sayı2;
    printf("%d\n", sayı3);
  }
  return 0;
}
int basamak(int num) {//Basamak sayısını bulur.
  int cout = 0;
  while (num != 0) {
    num /= 10;
    cout++;
  }
  return cout;
}