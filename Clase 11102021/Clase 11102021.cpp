#include <stdio.h>

int main()
{
    /*sumar dos numeros, estos numeros pedirlos por teclado*/

    //declaración de variables
    int iDato1;
    int iDato2;
    int iResultado;

    printf("\n ----- SUMA DE DATOS [DOS DATOS}-----\n");

    printf("Ingresa tu primer numero: ");
    scanf_s("%d", &iDato1); /*entrada de datos de tipo numérico por teclado*/

    printf("Ingrresa tu segundo numero");
    scanf_s("%d", &iDato1); /*entrada de datos de tipo numérico por teclado*/

    //Operación

    iResultado = iDato1 + iDato1;

    printf("El resultado es: %d", iResultado);



}