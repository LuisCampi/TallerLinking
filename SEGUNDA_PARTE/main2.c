/* $begin main2 */
/* main2.c */
#include <stdio.h>
#include "vector.h"

int x[2] = {1, 2};
int y[2] = {3, 4};
int z[2];

int main()
{   
    printf("\nPRIMERA PARTE DEL TALLER: OPERACIONES CON VECTORES PREVIAMENTE INICIALIZADOS.\n\n");

    addvec(x, y, z, 2);
    printf("z = [%d %d]\n", z[0], z[1]);
   
    multvec(x, y, z, 2);
    printf("z = [%d %d]\n", z[0], z[1]);

    printf("\nSEGUNDA PARTE DEL TALLER: USANDO TIPO DE DATO VECTOR.\n\n");
    
    struct vector v1, v2;

    printf("Ingrese el primer elemento del vector v1: ");
    scanf("%d", &v1.x);
    printf("Ingrese el segundo elemento del vector v1: ");
    scanf("%d", &v1.y);

    printf("Ingrese el primer elemento del vector v2: ");
    scanf("%d", &v2.x);
    printf("Ingrese el segundo elemento del vector v2: ");
    scanf("%d", &v2.y);

    int a[2] = {v1.x, v1.y};
    int b[2] = {v2.x, v2.y};

    addvec(a, b, z, 2);
    printf("\nLa suma de los elementos del vector v1 y v2 es: z = [%d %d]\n", z[0], z[1]);

    multvec(a, b, z, 2);
    printf("\nLa multiplicacion de los elementos del vector v1 y v2 es: z = [%d %d]\n", z[0], z[1]);

    return 0;
}
/* $end main2 */
