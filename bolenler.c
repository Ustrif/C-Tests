#include <stdio.h>

 int main()
 {

     int al_s, cx = 0;
     printf("Lutfen say gir:");
     scanf("%d",&al_s);
     do {
         cx++;
         if (al_s % cx == 0 ) {
             printf("%d ",cx);
         }
     } while(al_s != cx);
     return 0;

 }
