#include <stdio.h>
int main()
{
    FILE*fp;
    char buff[255];
    fp=fopen("archivo.txt","r");
//    fscanf(fp,"%s",buff);  //esta lee la primera palabra
//    printf("1:el contenido es: %s\n",buff);//es para abrir un archivo

    fgets(buff,255,(FILE*)fp);//variable y tamaño que debemos usar,255 es el tamañno del archivo
    printf("2:el contenido es: %s\n",buff); //este lee la segunda palabra

    fclose(fp);
    return 0;
}
