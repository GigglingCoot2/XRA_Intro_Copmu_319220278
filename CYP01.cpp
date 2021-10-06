#include <iostream>
void main(void)
    /* Un comentario */
{
    int ancho;
    int alto;
    float porcentajeX;
    float porcentajeY;
    float pancho;
    float palto;
    int x1;
    int y1;
    int x2;
    int y2;

    scanf_s("%i",&ancho);
    scanf_s("%i",&alto);
    scanf_s("%f",&porcentajeX);
    scanf_s("%f",&porcentajeY);
    scanf_s("%f",&pancho);
    scanf_s("%f",&palto);

    x1 = ancho * porcentajeX;
    y1 = alto * porcentajeY;
    x2 = x1 + ancho * pancho;
    y2 = y1 + alto * palto;

    printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, alto, porcentajeX, 
        porcentajeY, pancho, palto, x1, y1, x2, y2);



}
