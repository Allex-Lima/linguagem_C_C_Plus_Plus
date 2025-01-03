#include <stdio.h>

int main() {
    
    float raio, perimetro;
    float Pi = 3.1415927, area;

    printf("Introduza o raio da circunferencia: ");
    scanf("%f", &raio);

    area = (Pi * raio * raio);
    perimetro = 2 * Pi * raio;

    printf("Area = %f\nPerimetro %f\n", area, perimetro);
    
    return 0;
}