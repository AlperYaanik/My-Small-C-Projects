#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {//Metrikleri Tanımlama
  double cvp, brm;
  char str1[]="1 metre kaç inç yapar?";
  int swt, dns;
  char *birim[] = {
  "mil", "metre", "inç", "santimetre","milimetre", "yarda",    "galon",  "litre", "kuart", "pound", "kilogram", "ons",    "karat",
  "celcius",    "fahrenheit", "kelvin",   "saniye", "saat",  "gün"};

  char *token;
  int j = 0;
  int dvm = 0;
  puts(" 1 mil kaç metre yapar? tarzı sorunuzu girin");
 fgets(str1,100,stdin);
  token = strtok(str1, " ");
  while (token != NULL) {//Tokenize ediyoruz

    if (isdigit(token[j])) {
      brm = strtod(token, NULL);

    } else {
      for (int i = 0; i < 19; i++) {
        if (strcmp(birim[i], token) == 0) {
          if (dvm == 0) {
            swt = i;

          } else {
            dns = i;
          }
          dvm++;
        }
      }
    }
    j++;
    token = strtok(NULL, " ");
  }

  switch (swt) {//Birimlerin işlemleri
  case 0:
    switch (dns) {
    case 1:
      cvp = brm * 1609.344;
      break;
    case 2:
      cvp = brm * 63360;
      break;
    case 3:
      cvp = brm * 160934.4;
      break;
    case 4:
      cvp = brm * 1609344;
      break;
    case 5:
      cvp = brm * 1760;
      break;
   
    }
  break;
    case 1:
    switch (dns) {
    case 0:
      cvp = brm * 0.00062137;
      break;
    case 2:
      cvp = brm * 39.3700787;
      break;
    case 3:
      cvp = brm * 100;
      break;
    case 4:
      cvp = brm * 1000;
      break;
    case 5:
      cvp = brm * 1.0936133;
      break;
    
    }
    break;
  case 2:
    switch (dns) {
    case 0:
      cvp = brm * 1.57828283 * pow(10, -5);
      break;
    case 1:
      cvp = brm * 0.0254;
      break;
    case 3:
      cvp = brm * 2.54;
      break;
    case 4:
      cvp = brm * 25.4;
      break;
    case 5:
      cvp = brm * 0.0277777778;
      break;
   
    }
    break;
  case 3:
    switch (dns) {
    case 0:
      cvp = brm * 0.0000062137;
      break;
    case 1:
      cvp = brm * 0.01;
    case 2:
      cvp = brm * 0.393700787;
      break;
    case 4:
      cvp = brm * 10;
      break;
    case 5:
      cvp = brm * 0.010936133;
      break;
   
    }
    break;
  case 4:
    switch (dns) {
    case 0:
      cvp = brm * 0.00000062137;
      break;
    case 1:
      cvp = brm * 0.001;
      break;
    case 2:
      cvp = brm * 0.0393700787;
      break;
    case 3:
      cvp = brm * 0.1;
      break;

    case 5:
      cvp = brm * 0.0010936133;
      break;
    
    }
    break;
  case 5:
    switch (dns) {
    case 0:
      cvp = brm * 0.000568181818;
      break;
    case 1:
      cvp = brm * 0.9144;
      break;
    case 2:
      cvp = brm * 36;
      break;
    case 3:
      cvp = brm * 91.44;
      break;
    case 4:
      cvp = brm * 914.4;
      break;
   
    }
    break;
  case 6:
    switch (dns) {
    case 7:
      cvp = brm * 3.78541178;
      break;
    case 8:
      cvp = brm * 4;
      break;
    
    }
    break;
  case 7:
    switch (dns) {
    case 6:
      cvp = brm * 0.264172052;
      break;
    case 8:
      cvp = brm * 0.87988;
      break;
    
    }
    break;
  case 8:
    switch (dns) {
    case 6:
      cvp = brm * 0.25000;
      break;
    case 7:
      cvp = brm * 1.136523;
      break;
    
    }
    break;
  case 9:
    switch (dns) {
    case 10:
      cvp = brm * 0.4535923;
      break;
    case 11:
      cvp = brm * 16;
      break;
    case 12:
      cvp = brm * 2267.962;
      break;
    
    }
    break;
  case 10:
    switch (dns) {
    case 9:
      cvp = brm * 2.20;
      break;
    case 11:
      cvp = brm * 35.2739619;
      break;
    case 12:
      cvp = brm * 5000.000;
      break;
    
    }
    break;
  case 11:
    switch (dns) {
    case 9:
      cvp = brm * 0.062500;
      break;
    case 10:
      cvp = brm * 0.0283495231;
      break;
    case 12:
      cvp = brm * 141.7476;
      break;
    
    }
    break;
  case 12:
    switch (dns) {
    case 9:
      cvp = brm * 0.004454793;
      break;
    case 10:
      cvp = brm * 0.0002;
      break;
    case 11:
      cvp = brm * 0.0070548;
      break;
    
      }
    break;
  case 13:
    switch (dns) {
    case 14:
      cvp = brm * 33.8;
      break;
    case 15:
      cvp = brm * 273;
      break;
   
      }
    break;
  case 14:
    switch (dns) {
    case 13:
      cvp = brm * -17.2222222;
      break;
    case 15:
      cvp = brm * 255.9278;
      break;
     
      }
    break;
  case 15:
    switch (dns) {
    case 13:
      cvp = brm * -272.15;
      break;
    case 14:
      cvp = brm * -457.8700;
      break;
    
      }
    break;
  case 16:
    switch (dns) { 
      
    case 17:
    cvp=brm*0.000277777778;
    break;
    case 18:
    cvp=brm*1.15740741*pow(10,-5);
      break;
   
      }
    break;
    case 17:
    switch(dns){
      case 16:
      cvp=brm*3600;
      break;
      case 18:
      cvp=brm*0.0416666667;
      break;
      
    }
  break;
    case 18:
    switch(dns){
      case 16:
      cvp=brm*86400;
      break;
      case 17:
      cvp=brm*24;
      break;
  
      }
   break;
  
    }
  printf("%lf", cvp);
  return 0;
}