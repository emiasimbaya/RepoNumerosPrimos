#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int num;
    printf ("Ingresa un numero\n");
    scanf("%d",&num);

    bool primo;
    int noprimo;

 for (int i = 2; i <= num / 2; i++) {
            primo = num % i;
            if (primo == 0) {
                noprimo = 0;
            } else {
                noprimo = 1;
            }
        }
        
        if (noprimo == 0) {
            printf("No es un numero primo");
        } else {
            printf("Es un numero primo");
        }
    }
bool esPrimo(int numero){
    int i;
    for(i=2; i<numero; i++){
        if(numero%i==0){
            return false;
        }
    }
    return true;
}