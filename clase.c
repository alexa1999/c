#include<stdio.h>
#include<stdlib.h>

int main()
{
    char buffer[123]; //puede tener hasta 123 caracteres
    unsigned long ul;
    printf("ingrese un numero sin signo:");
    fgets(buffer,123,stdin);
    ul=strtoul(buffer,NULL,0);
    ul = ul*2;
    printf("el doble del numero ingresado: %lu\n\n",ul);
    double x;
    x=strtod(buffer,NULL);//es para la escritura en double
    printf("el numero ingresado en double es: %.2f\n\n",x);

    int num =atoi(buffer); //convertur un entero a string con la funcion atoi
    printf("el numero ingresado entero es :%i\n\n",num);

    char texto[33];
    itoa(num,texto,10);//conversion de entero a strign
    printf("el numero nuevamente en un string es: %s\n\n",texto);
    return 0;
}
