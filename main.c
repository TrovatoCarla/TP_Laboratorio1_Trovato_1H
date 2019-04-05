#include <stdio.h>
#include <stdlib.h>
#include "FuncionesCalculadora.h"
#include "PedirNumero.h"

int main(void)
{
    int primerNumero;
    int segundoNumero;
    int respuesta;
    int resultado;
    float resultadoDivision;
    if(getInt("Ingrese primer operando: ",&primerNumero)==0)
    {
        printf("1.Primer operando (A=%d)\n",primerNumero);
    }
    if(getInt("\nIngrese segundo operando: ",&segundoNumero)==0)
    {
        printf("2.Segundo operando (B=%d)\n",segundoNumero);
    }
    do
    {
    printf("\n 1.Primer operando (A=%d)",primerNumero);
    printf("\n 2.Segundo operando (B=%d)",segundoNumero);
    printf("\n 3.Calcular la suma\n ");
    printf("4.Calcular la resta\n ");
    printf("5.Calcular la division\n ");
    printf("6.Calcular la multiplicacion\n ");
    printf("7.Calcular el factorial\n ");
    printf("8.Calcular todas las operaciones\n ");
    printf("9.Salir\n ");
    printf("\nIngrese el numero de opcion que desea realizar: ");
    scanf("%d",&respuesta);
        switch(respuesta)
        {
            case 3:
                if(calcularSuma(primerNumero,segundoNumero,&resultado)==0)
                {
                    printf("La suma es: %.1d",resultado);
                }
                break;
            case 4:
                if(calcularResta(primerNumero,segundoNumero,&resultado)==0)
                {
                    printf("La resta es: %.1d",resultado);
                }
                break;
            case 5:
                if(calcularDivision(primerNumero,segundoNumero,&resultadoDivision)==0)
                {
                    printf("La division es: %.1f",resultadoDivision);
                }
                else
                {
                    printf("\nDivision: Error,no se puede dividir por 0 ");
                }
                break;
            case 6:
                if(calcularMultiplicacion(primerNumero,segundoNumero,&resultado)==0)
                {
                    printf("La multiplicacion es: %.1d",resultado);
                }
                break;
            case 7:
                if(calcularFactorial(primerNumero,&resultado)==0)
                {
                    printf("El factorial de %d es %d",primerNumero,resultado);
                }
                else
                {
                    printf("No existe factorial de numeros negativos");
                }
                break;
            case 8:
                if(calcularSuma(primerNumero,segundoNumero,&resultado)==0)
                {
                    printf("\nLa suma es: %.1d",resultado);
                }

               if(calcularResta(primerNumero,segundoNumero,&resultado)==0)
                {
                    printf("\nLa resta es: %.1d",resultado);
                }
                if(calcularDivision(primerNumero,segundoNumero,&resultadoDivision)==0)
                {
                    printf("\nLa division es: %.1f",resultadoDivision);
                }
                else
                {
                    printf("\nDivision: Error,no se puede dividir por 0 ");
                }
                if(calcularMultiplicacion(primerNumero,segundoNumero,&resultado)==0)
                {
                    printf("\nLa multiplicacion es: %.1d",resultado);
                }
                if(calcularFactorial(primerNumero,&resultado)==0)
                {
                    printf("\nEl factorial de %d es %d",primerNumero,resultado);
                }
                else
                {
                    printf("No existe factorial de numeros negativos");
                }
                break;
        }
    }
    while(respuesta!=9);
   return 0;
}

