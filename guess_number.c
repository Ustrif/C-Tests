#include <stdio.h>
#include <stdlib.h>

int main()
{
  srand(time(NULL));
      int rastgel = rand() % 1000+1;
      int tahmin, adet;
  
      do {
          printf("Tahmin girin:");
          adet++;
          scanf("%d",&tahmin);
          if (tahmin == rastgel) {
              printf("Tahmin doru.");
          }
          else if (tahmin > rastgel) {
              printf("Tahmin saydan buyuk.");
          }
          else {
              printf("Tahmin saydan kucuk.");
          }
      } while (tahmin != rastgel);
  
      printf("Say: %d , Tahmin adeti: %d",rastgel, adet);
  return 0;
}
