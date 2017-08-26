#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
    int number,input;
    srand(time(NULL));//para generar randoms
    number = rand()%10+ 1;//VA A GENRAR ENTRE 1 Y DIEZ
    printf("el numero generado es: %i",number);
    return 0;
}
