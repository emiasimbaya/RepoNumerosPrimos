#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int num;
    printf ("Ingresa un numero\n");
    scanf("%d",&num);

    int prim;
    bool noPrim;


  if (num <= 1) {
        printf("\nNo es primo\n");
    } else {
        for (int i = 2; i <= num / 2; i++) {
            prim = num % i;
            if (prim == 0) {
                noPrim = 0;
            } else {
                noPrim = 1;
            }
        }
    }
if (noPrim == 0) {
            printf("No es primo");
        } else {
            printf("Es primo");
        }
    }
