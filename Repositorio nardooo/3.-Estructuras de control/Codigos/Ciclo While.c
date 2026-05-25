#include <stdio.h>
#include <stdlib.h>

int    main()
{
    int x;
    int suma=0;
    printf("un numero plis\n");
    scanf("%d",&x);
//while cuando no sabes cuantas veces vas a repetir el ciclo

    while ( x!=0 ){
        suma += x;
    scanf("%d",&x);

    printf("%d\n",x+suma);
    }
    return 0;
}
