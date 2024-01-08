#include "graus.h"

#include <stdio.h>


void main(){
    char e;
    double x;
    


    printf("escolha uma letra\na - Celsius para Fahrenheit\nb - Celsius para Kelvin\nc - Fahrenheit para Celsius\nd - Fahrenheit para Kelvin\ne - Kelvin para Celsius\nf - Kelvin para Fahrenheit\n");
    scanf("%c", &e);
    switch(e){
        case 'a':
            printf("Em Celsius:\n");
            x = Celsius_para_Fahrenheit(x);
            printf("Em Fahrenheit:\n%.2lf\n",x);
            break;
        case 'b':
            printf("Em Celsius:\n");
            x = Celsius_para_Kelvin(x);
            printf("Em Kelvin:\n%.2lf\n",x);
            break;
        case 'c':
            printf("Em Fahrenheit:\n");
            x = Fahrenheit_para_Celsius(x);
            printf("Em Celsius:\n%.2lf\n",x);
        case 'd':
            printf("Em Fahrenheit:\n");
            x = Fahrenheit_para_Kelvin(x);
            printf("Em Kelvin:\n%.2lf\n",x);
            break;
        case 'e':
            printf("Em Kelvin:\n");
            x = Kelvin_para_Celsius(x);
            printf("Em Celsius:\n%.2lf\n",x);
            break;
        case 'f':
            printf("Em Kelvin:\n");
            x = Kelvin_para_Fahrenheit(x);
            printf("Em Fahrenheit:\n%.2lf\n",x);
            break;
    }
}