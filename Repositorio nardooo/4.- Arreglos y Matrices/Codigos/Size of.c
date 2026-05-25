#include <stdio.h>
#include <stdlib.h>



int main()

{
    char nombre[3][16];
    int  i;
    int N = 3;
    int j;
    int longitud;
            for (i=1;i<=N;i++)
                {
        printf("escriba nombre de alumno %i\n",i);
        fgets(nombre[i-1], sizeof(nombre[i-1]), stdin);


                }

  printf("\n\n\n%s", nombre[0]);
  printf("%s", nombre[1]);
  printf("%s", nombre[2]);



                for (j=1;j<=N;j++)  {
             longitud =strlen(nombre[j-1]);
  printf("\n\nEl nombre %s tiene %i letras\n\n",nombre[j-1],longitud);


                                    }






    return 0;
}
