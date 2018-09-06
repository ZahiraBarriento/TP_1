#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    float numeroUno=0, numeroDos=0, suma, resta, Division, multiplicacion;
    int factorialA, factorialB, flag1=0, flag2=0, opcion;

    do
    {
        system("pause");
        system("cls");
        printf("   >>> MENU CALCULADORA<<<");
        printf("\n\n 1 .Ingresar primer operando (A=%.2f) ",numeroUno);
        printf("\n\n 2 .Ingresar segundo operando (B=%.2f) ",numeroDos);
        printf("\n\n 3 .Calcular todas las operaciones:");
        printf("\n   a. Calcular la suma A+B");
        printf("\n   b. Calcular la resta A-B");
        printf("\n   c. Calcular la division A/B");
        printf("\n   d. Calcular la multiplicacion A*B");
        printf("\n   e. Calcular el factorial de A! y B!\n");
        printf("\n 4. Mostrar resultados:");
        printf("\n\n 5. Salir:");
        printf("\n\n Seleccione una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("\n Ingrese el primer operando: ");
            scanf ("%f", &numeroUno);
            flag1=1;
            break;

        case 2:
            printf("\n Ingrese segundo operando: ");
            scanf ("%f", &numeroDos);
            flag2=1;
            break;

        case 3:
            if (flag1==1 && flag2==1)
            {
                suma=sum(numeroUno,numeroDos);
                resta=subtract(numeroUno,numeroDos);
                Division=division(numeroUno,numeroDos);
                multiplicacion=multiplication(numeroUno,numeroDos);
                factorialA=factorial_A(numeroUno);
                factorialB=factorial_B(numeroDos);

                printf("Calculos realizados\n");
            }

            else
            {
                printf("\nNo se han ingresado ningun numero \n");
            }
            break;

        case 4:
            if (flag1==1 || flag2==1)
            {
                printf("\nLa suma entre %.2f+%.2f es: %.2f\n", numeroUno, numeroDos, suma);
                printf("\nLa resta entre %.2f-%.2f es: %.2f\n",numeroUno, numeroDos, resta);

                if(numeroDos==0)
                {
                    printf("\nError. No es posible dividir por cero o un numero negativo\n");
                    printf("La division entre %.2f/%.2f no se puede calcular\n", numeroUno, numeroDos);
                }
                else
                {
                    printf("\nLa division entre %.2f/%.2f es: %.2f\n", numeroUno, numeroDos, Division);
                }

                printf("\nLa multiplicacion entre %.2f*%.2f es: %.2f\n", numeroUno, numeroDos, multiplicacion);

                if(numeroUno<0)
                {
                    printf("\nError. No es posible hacer el factorial de un numero negativo\n");
                }
                else
                {
                    printf("\nEl factorial de A=%f! es: %d\n", numeroUno, factorialA);
                }

                if(numeroDos<0)
                {
                    printf("\nError. No es posible hacer el factorial de un numero negativo\n");
                }
                else
                {
                    printf("\nEl factorial de B=%f! es: %d\n\n", numeroDos, factorialB);
                }
            }
            break;

        case 5:
            printf ("\nGracias por utilizar la calculadora\n");
            break;

        default:
            printf (" Error. Ingrese nuevamente una opcion del 1 al 5.");
        }

    }while(opcion!=5);

    return 0;
}
