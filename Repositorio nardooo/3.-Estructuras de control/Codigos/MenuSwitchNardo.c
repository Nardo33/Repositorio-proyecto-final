#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcionP,opcionC, x, y;

do{
        printf("\nQue deseas hacer!?\n");
        printf("1) Analizar Numero\n");
        printf("2) Calculadora\n");
        printf("3) Salir\n");

        scanf("%d",&opcionP);



        switch(opcionP)
         {
        case 1: //analizar numero
            printf("Opcion seleccionada: Analizar Numero\n");
            printf("Dame un numero entero\n");
            scanf("%i",&x);
                if(x % 2 == 0)
                {
                    printf("tu numero es PAR!");
                }
                else
                {
                    printf("tu numero es IMPAR");
                }

                break;

        case 2: //calculadora
            printf("opcion seleccionada: Calculadora\n");
            printf("Dame 2 numeros enteros\n");
            scanf("%d \n %d",&x, &y);
            printf("Que quieres hacer?\n");
            printf("1)Sumar\n");
            printf("2)Restar\n");
            printf("3)Regresar\n");
            scanf("%d",&opcionC);
            switch(opcionC)
            {
            case 1://sumar
                printf("La suma de los numeros es %d",x+y);
                break;
            case 2://resta
                printf("La resta de los numeros es %d",x-y);
                break;
            case 3://volver al menu
                printf("----REGRESANDO AL MENU PRINCIPAL-----");
                break;



            }


                break;
        case 3:
            printf("-----adios mundo;b-----");

                return 0;
                break;




        default:
            printf("-----------Opcion no valida-------------\n");


            }
                    }
            while(opcionP!=3);
    return 0;

}
