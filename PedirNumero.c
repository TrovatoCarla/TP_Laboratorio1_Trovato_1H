#include <stdio.h>
#include <stdlib.h>
#include "PedirNumero.h"

int getInt(char* mensaje,int* resultado)
{
    int buffer;
    int retorno=-1;

    if(mensaje!=NULL && resultado!=NULL)
    {
        printf("%s",mensaje);
        scanf("%d",&buffer);
        *resultado=buffer;
        retorno=0;
    }
    return retorno;
}
