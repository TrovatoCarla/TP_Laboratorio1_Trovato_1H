#include <stdio.h>
#include <stdlib.h>
#include "FuncionesCalculadora.h"
#include "PedirNumero.h"


/** \brief retorna 0 si se pudo realizar la suma
 **        retorna 1 si no se pudo realizar la suma
 * \param a int primer operando
 * \param b int segundo operando
 * \param resultado int* direccion de memoria del resultado de la operacion
 * \return int 0 si se pudo realizar suma
 *             1 si no se pudo realizar la suma
 *
 */
int calcularSuma(int a,int b,int *resultado)
{
    int suma;
    int retorno=0;
    if(retorno==0)
    {
        suma=a+b;
        *resultado=suma;
        return 0;
    }
    else
    {
      retorno=-1;
    }
    return retorno;
}
/** \brief retorna 0 si se pudo realizar la resta
 **        retorna 1 si no se pudo realizar la resta
 *
 * \param c int primer operando
 * \param d int segundo operando
 * \param resultado int* direccion de memoria del resultado de la operacion
 * \return int 0 si se pudo realizar resta
                1 si no se pudo realizar la resta
 *
 */
int calcularResta(int c,int d,int *resultado)
{
    int resta;
    int retorno=0;
    if(retorno==0)
    {
        resta=c-d;
        *resultado=resta;
        return 0;
    }
    else
    {
        retorno=-1;
    }
    return retorno;
}
/** \brief retorna 0 si se pudo realizar la division
 *          retorna 1 si no se pudo realizar la division
 * \param e int primer operando
 * \param f int segundo operando
 * \param resultado float* direccion de memoria del resultado de la operacion
 * \return float  0 si se pudo realizar division
                1 si no se pudo realizar la division
 *
 */
float calcularDivision(int e,int f,float *resultado)
{
    float division;
    int retorno=1;
    if(f!=0)
    {
        division=(float)e/f;
        *resultado=division;
        return retorno=0;
    }
    else
    {
        return retorno;
    }

}



/** \brief retorna 0 si se pudo realizar la multiplicacion
 *          retorna 1 si no se pudo realizar la multiplicacion
 *
 * \param g int primer operando
 * \param h int segundo operando
 * \param resultado int* direccion de memoria del resultado de la operacion
 * \return int 0 si se pudo realizar la multiplicacion
                1 si no se pudo realizar la multiplicacion
 *
 */
int calcularMultiplicacion(int g,int h,int *resultado)
{
    int multiplicar;
    int retorno=0;
    if(retorno==0)
    {
        multiplicar=g*h;
        *resultado=multiplicar;
        retorno=0;
    }
    else
    {
        retorno=-1;
    }
    return retorno;
}
/** \brief retorna 0 si se pudo realizar la operacion factorial
 *          retorna 1 si no se pudo realizar la operacion factorial
 *
 * \param A int primer operando
 * \param resultado int* direccion de memoria del resultado de la operacion
 * \return int 0 si se pudo realizar la operacion factorial
                1 si no se pudo realizar la operacion factorial
 *
 */
int calcularFactorial(int A,int *resultado)
{
    int i;
    int factorial=1;
    int retorno=-1;
    if(A>0)
    {
        for(i=1;i<=A;i++)
        {
            factorial=factorial*i;
            *resultado=factorial;
            retorno=0;
        }
    }
    else
    {
        if(A==0)
        {
            *resultado=1;
            retorno=0;
        }
        else
        {
            return 1;
        }
    }
    return retorno;
}

