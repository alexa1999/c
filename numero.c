#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{

    int number,input;
    input=3;
    srand(time(NULL));//para generar randoms
    number = rand()%10 + 1;//VA A GENRAR ENTRE 1 Y DIEZ
    printf("el numero generado es: %i\n",number);

    char buffer[10]; //puede tener hasta 123 caracteres
    unsigned long in;
    printf("ingrese un numero :");
    fgets(buffer,10,stdin);
    in =strtoul(buffer,NULL,0);



    while(input!=1)
    {
        if(number==in)
            printf("Adivinaste\n\n");
        else{
            printf("perdiste\n\n");

        }
    printf("ingrese un numero :");
    fgets(buffer,10,stdin);
    in =strtoul(buffer,NULL,0);
    input--;
    }

    return 0;
}
