#include"graus.h"

#include <stdio.h>

double Fahrenheit_para_Celsius(double C){
    double F;
    scanf("%lf",&F);
    C = (F - 32.0) * (5.0/9.0);
    return C;
}
double Celsius_para_Fahrenheit(double C){
    double F;
    scanf("%lf",&C);
    F = (C * 9.0/5.0) + 32.0;
    return F;
}
double Celsius_para_Kelvin(double C){
    double K;
    scanf("%lf",&K);
    K - C + 273.0;
    return K;
}
double Fahrenheit_para_Kelvin(double F){
    double K;
    scanf("%lf",&F);
    K = (F - 32.0) * 5.0/9.0 + 237.15;
    return K;
}
double Kelvin_para_Celsius(double K){
    double C;
    scanf("%lf",&K);
    C - K - 273.0;
    return C;
}
double Kelvin_para_Fahrenheit(double K){
    double F;
    scanf("%lf",&K);
    F = (K - 273.15) * (9.0/5.0) + 32.0;
    return F;
}
