
#include <stdio.h>
#include <stdlib.h>
        //Arreglos 1
int main()
{
    int i;
    int N;//tamaño del arreglo


        printf("Tamaño del arreglo\n");
        scanf("%i",&N);


        float temp[N];
        for(i = 0;i<N ; i++ )
        {
            printf("alimenta el arreglo, Espacio numero %i\n\n",i+1);
            scanf("\n\n%f",&temp[i]);
        }
        for(i = 0;i<N ; i++ )
        {
            printf("\n\n%f",temp[i]);
        }



    return 0;
}
