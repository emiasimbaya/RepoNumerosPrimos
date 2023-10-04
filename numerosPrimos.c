#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int num;
    printf ("Ingresa un numero\n");
    scanf("%d",&num);

    int primo;
    int noprimo;

 for (int i = 2; i <= num / 2; i++) {
            primo = num % i;
            if (primo == 0) {
                noprimo = 0;
            } else {
                noprimo = 1;
            }
        }