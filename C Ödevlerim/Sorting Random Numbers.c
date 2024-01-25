#include <stdio.h>//Calls Libraries
#include <stdlib.h>
#include <time.h>

int rollf(void);

int main(void) {
srand(time(NULL));
puts("The Numbers obtained from random generator");
  int temp ,a[5];
  for(int i=0 ;i<5;i++)//Invoking a function to get random numbers
    {
      a[i]=rollf();
      }
  puts("\nSorted Form");
    for(int i=0 ;i<5;i++)//Sorting the numbers
    {
      for(int j=0; j<4-i;j++)
      {
        if(a[j]>a[j+1])
        {temp= a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
         }
      }
    }

  for(int i=0; i<5;i++)//Printing the sorted numbers
    {
      printf("%d ",a[i]);
    }
  
  }

int rollf(void){//Creating random numbers
  int x=rand()%100;
  printf("%d ",x);
  return x;
}