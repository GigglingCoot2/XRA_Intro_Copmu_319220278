#include <stdio.h>

int main()
{
    /*sumar dos numeros, estos numeros pedirlos por teclado*/

    //declaraci�n de variables
    int iDato1;
    int iDato2;
    int iResultado;

    printf("\n ----- SUMA DE DATOS [DOS DATOS}-----\n");

    printf("Ingresa tu primer numero: ");
    scanf_s("%d", &iDato1); /*entrada de datos de tipo num�rico por teclado*/

    printf("Ingrresa tu segundo numero");
    scanf_s("%d", &iDato1); /*entrada de datos de tipo num�rico por teclado*/

    //Operaci�n

    iResultado = iDato1 + iDato1;

    printf("El resultado es: %d", iResultado);



}