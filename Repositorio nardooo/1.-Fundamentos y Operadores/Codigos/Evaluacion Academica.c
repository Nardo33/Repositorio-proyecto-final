#include <stdio.h>
#include <stdlib.h>

int main()
{
int edad;
int promedio;
int reprobadas;
int faltas;

printf("escriba su edad\n");
    scanf("%d",&edad);

printf("promedio entre 1 y 100\n");
    scanf("%d",&promedio);

printf("cantidad de materias reprobadas\n");
    scanf("%d",&reprobadas);

printf("escriba cantidad de faltas\n");
    scanf("%d",&faltas);



//estado de reinscripcion
        if(reprobadas<=2)
        {
            printf("Reinscripcion valida");
        }
        else if (reprobadas==3)
        {
            printf("Estado en revision");
        }
        else if (reprobadas>3)
        {
            printf("Reinscripcion invalida");
        }

//elegibilidad a beca

        if (promedio>=90&&reprobadas>0)
        {
              if  (faltas<=5)
              {
                  printf("Elegible para beca");
              }
        }
        else
        {
         printf("\nno elegible para beca")   ;
        }
//situacion critica

        if(promedio>60||reprobadas>4||faltas>15)
        {
           printf("\nEstudiante en situacion critica");
        }

        else
        {
            printf("\nestudiante regular");
        }
    return 0;
}



