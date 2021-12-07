#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include"mate.h"


int main()
{
    char bienvenida []={"*****BIENVENIDOS*****"};
    system("color 0D");
    int i=0;
    for(i=0;i<21;i++){
    printf("%c",bienvenida[i]);
    Sleep(150);
}
    system("cls");

    int a,f, opcion;
    float A,B;


    do
{
        printf("\n Ingrese valor de A: ");
        scanf("%f",&A);
        Sleep(250);
        printf("\n Ingrese valor de B: ");
        scanf("%f",&B);
        system("cls");


        printf( "\n   *** MENU DE OPCIONES***" );
        Sleep(250);
        printf( "\n\n   1. Sumar dos n%cmeros.", 163 );
        Sleep(250);
        printf( "\n   2. Restar dos n%cmeros.", 163 );
        Sleep(250);
        printf( "\n   3. Multiplicar dos n%cmeros.", 163 );
        Sleep(250);
        printf( "\n   4. Dividir dos n%cmeros.", 163 );
        Sleep(250);
        printf( "\n   5. Calcular Factorial de n%cmero entero", 163 );
        Sleep(250);
        printf( "\n   6. Calcular todas las operaciones" );
        Sleep(250);
        printf( "\n   7. Salir.\n" );


    do
{
            printf( "\n   Introduzca opci%cn (1-7): ", 162 );
            fflush( stdin );
            scanf( "%d", &opcion);
}
         while ( opcion < 1 || opcion > 7 );

         switch ( opcion )
{
              case 1:suma(A,B);
              break;

              case 2:resta(A,B);
              break;

              case 3:multi(A,B);
              break;

              case 4:division(A,B);

                if(A==0 || B==0){
                printf(" ERROR NO es posible dividir por CERO");
                printf("\n");
                break;

              case 5:{
                printf("Ingrese un valor:\n");
                scanf("%d",&a);
                f=factorial(a);
                printf(" El factorial de %d!=%d\n",a,f);
                printf("\n");
                break;

              case 6:todas(A,B);
              break;

}

}
}

}
         while (opcion != 7);



         return 0;
}
