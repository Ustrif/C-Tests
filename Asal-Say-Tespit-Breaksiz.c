#include <stdio.h>

// 1 - 100 milyon arası asal sayı bulur.

int main() {
    int n, durum;

    do {
        printf("1 ile hangi sayi arasindaki asallari bulmak istiyorsunuz: ");
        scanf("%d",&n);

        if(n > 100000000)
            printf("Daha kucuk bir sayi secin!\n");
    } while (n > 100000000);


    durum = 0;

    for(int i = 2; i != n + 1 ; i++) {

        for(int y = 2 ; y != i; y++) {

            if(i%y == 0 && i != y)
                durum = 1;

        }

        if (durum == 1)
            durum = 0;
        else
            printf("%d asal. \n", i);

    }


    return 0;
}
