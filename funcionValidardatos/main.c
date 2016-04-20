#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
int validarDato(char*);
int main()
{
    char nombreValidado[30];
    int respuesta;

    respuesta = validarDato(nombreValidado);
    if(respuesta == 0)
    {
        printf("%d\n%s", respuesta, nombreValidado);
    }
    else
    {
        printf("hubo un error al cargar el dato");
    }
    return 0;
}

int validarDato(char* nombre)
{
    char auxNombre[30];
    int isValidado;
    int auxInt;

    do
    {
        system("cls");
        isValidado = getName(auxNombre, "Ingrese el nombre: ", "error: solo se permiten letras\n", 2, 30);
        if(isValidado!=0)
        {
            printf("Desea volver a ingresarlo?\n1-Si\n2-No");
            fflush(stdin);
            scanf("%d", &auxInt);
            if(auxInt== 2)
            {
                break;
            }
        }

    }while(isValidado!=0);

    if(isValidado == 0)
    {
        strcpy(nombre, auxNombre);
    }


    return isValidado;




}
