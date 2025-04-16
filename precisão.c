#include <stdio.h>
 
int main() {
    double NumeroPreciso = 3.141592653589793;
    long double NumeroMuitoPreciso = 3.14159265358979323846; // 3.141592653589793115998
 
    printf("Número preciso (double): %.15f\n", NumeroPreciso);
    printf("Número muito preciso (long double): %.21Lf\n", NumeroMuitoPreciso);
 
    return 0;
}