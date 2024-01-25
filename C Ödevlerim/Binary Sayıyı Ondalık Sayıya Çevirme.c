#include <math.h>
#include <stdio.h>
int main(void) {
  int üst, k = 0, num = 0, sayı;

  printf("Lütfen Binary Sayı giriniz\n");
  scanf("%d", &sayı);

  while (sayı != 0) {//2'nin Kuvvetleriyle Çarpıyoruz
    üst = pow(2, num);
    if (sayı % 10 == 1) {
      k = üst + k;
    }
    sayı = sayı / 10;
    num++;
  }
  printf("%d", k);

  return 0;
}