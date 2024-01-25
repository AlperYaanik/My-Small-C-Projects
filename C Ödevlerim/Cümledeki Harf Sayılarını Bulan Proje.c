#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void letter_count(const char *s, char c, char k) {
  size_t t = 0, n = 0;

  if (c != '\0') { // Cümleler içinde harfler arıyoruz
    for (const char *p = s; (p = strchr(p, c)) != NULL; ++p) {
     
      ++n;
    }
    if (k != '\0') {
      for (const char *p = s; (p = strchr(p, k)) != NULL; ++p) {
        ++t;
      }
    }
  }
  
  printf("Toplam %c ve %c sayısı:", c, k);
  for (int i = 0; i < n + t; i++) {//Histogram Oluşturuyoruz
    printf("*"); 
  }
  puts("");
}
void letters(const char *s) {
  //Harfleri fonksiyona sokarak sayısını buluyoruz
  char c = 'a';
  char k = 'A';
  for (int i = 0; i < 26; i++) {
    letter_count(s, c, k);
    c++;
    k++;
  }
}

int main(void) {
  char words[999];
  int c, i = 0;
  puts("Yazınızı girin");
  do {
    c = getchar();
    words[i] = c;

    i++;
  } while (c != '\n' && c != EOF);

  letters(words);
}
