#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5,b=2,c=3,d,e,f;

    //incremento pos fijo y prefijo
    printf(" %i,%i,%i",++a,b++,c++);

    printf("\n %i,%i,%i",a,b,c);

    //jerarquia de operaciones
    printf("\n\n%i", d =(a+b)*c);

    printf(" %i,%i,%i",--a,b--,c--);

    printf("\n\n%i", d =a+b*c);

    printf("\n %i", e=a||b);

    printf("\n %i", f=c|d);

    printf("\n %i", f<c?:1,0);

    return 0;
}
