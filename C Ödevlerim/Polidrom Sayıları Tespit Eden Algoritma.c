#include <math.h>
#include <stdio.h>
int main(void) {
  int sayı, üst, i = 0, num, ans1 = 0, ans2 = 0;

  printf("Bir tam sayı belirtiniz\n");
  scanf("%d", &sayı);
  num = sayı;

  while (sayı != 0) {//Sayının kaç basamaklı olduğunu buluyoruz
    sayı = sayı / 10;
    i++;
    }
  sayı = num;

  int k = i;

  for (int a = 0; a <= k; a++) {//Sayıyı ters çevirme
    ans1 = sayı % 10;
    sayı = sayı / 10;

    üst = pow(10, i-1);

    ans2 = ans2 + üst * ans1;
    i--;
  }

  if (ans2 == num) {
    printf("Sayınız polidrom");
  } else {
    printf("Sayınız polidrom değil");
  }
  return 0;
}