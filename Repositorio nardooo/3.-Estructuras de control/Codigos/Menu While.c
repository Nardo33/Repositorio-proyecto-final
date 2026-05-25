
int main()
{
    int menu;
    int N;
    int c;

    int i;
    do  {
    int suma=0;
        printf("\nCuantas calificaciones deseas ingresar?\n");
        printf("presione 0 para salir\n");
            scanf("%d",&N);

        for (i=1;i<=N;i++)  {
            printf("escriba sus calificaciones\n");
            scanf("%d",&c);
        if(c>100||c<0)
                    {
                printf("porfavor, ingrese un numero entre 0 y 100");
                scanf("%d",&c);
                    }


        suma += c;

            printf("Suma de el promedio acumulado\n%d\n",suma);


                            }
            printf("Tu promedio es  %d",suma/N);





        }
        while (menu == 0);




        return 0;
    }
