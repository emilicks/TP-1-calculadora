#ifndef MATE_H_INCLUDED
#define MATE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>




void suma(float A,float B){

    float resSuma=A+B;
    printf("\nLa suma entre %.2f(A) + %.2f(B) es = %.2f",A,B,resSuma);
    printf("\n");
    printf("\n");
    printf("\n");

}
 void resta(float A,float B){

    float resResta=A-B;
    printf("La resta entre %.2f(A) - %.2f(B) es = %.2f",A,B,resResta);
    printf("\n");
    printf("\n");


}


   void multi(float A,float B){

    float resMulti=A*B;
    printf("La multiplicacion entre %.2f(A) * %.2f(B) es = %.2f",A,B,resMulti);
    printf("\n");
    printf("\n");
}

    void division(float A,float B){

    float resDiv=A/B;
    printf("La division entre %.2f(A) / %.2f(B) es = %.2f",A,B,resDiv);
    printf("\n");
    printf("\n");
}


  long int factorial(int a){
    int resultado;
    if(a==1){
        return(1);
    }
    resultado=a*factorial(a-1);
    return(resultado);

}


  void todas (float A,float B){

    float sum=A+B;
    float res=A-B;
    float multi=A*B;
    float div=A/B;

    printf("La suma entre %.2f(A) + %.2f(B) es = %.2f",A,B,sum);
    printf("\n");
    printf("La resta entre %.2f(A) - %.2f(B) es = %.2f",A,B,res);
    printf("\n");
    printf("La multiplicacion entre %.2f(A) * %.2f(B) es = %.2f",A,B,multi);
    printf("\n");
    printf("La division entre %.2f(A) / %.2f(B) es = %.2f",A,B,div);
    if(A==0 || B==0){
        printf("  ¡¡¡ERROR!!! ");
    }
    printf("\n");


}



#endif // MATE_H_INCLUDED
