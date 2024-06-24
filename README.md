# conversor_de_temperaturas
Este repositório contém os arquivos de um programa simples em C que converte temperaturas entre diferentes escalas. 
O programa permite ao usuário escolher o tipo de conversão desejada e, em seguida, insere a temperatura a ser convertida. 
Com base na escolha do usuário, a conversão é realizada e o resultado é exibido na tela.

## Makefile
- binario: Esta é a regra para criar o executável final, chamado main. Ele depende dos arquivos objeto main.o e graus.o. 
Se algum desses arquivos objeto for mais recente que o executável ou não existir, o comando gcc main.o graus.o -o main será executado para criar o executável.
- main.o: Esta regra especifica como criar main.o a partir de main.c. O comando gcc -c main.c compila main.c sem vinculá-lo.
- graus.o: Esta regra especifica como criar graus.o a partir de graus.c e graus.h. O comando gcc -c graus.c compila graus.c sem vinculá-lo.

## graus.c 
### funçoes
- Fahrenheit_para_Celsius(double C):
 
C=(F−32.0)×( 9.0/ 5.0).

- Celsius_para_Fahrenheit(double C):

F=(C×( 5.09.0 ))+32.0.

- Celsius_para_Kelvin:

K=C+273.15.

- Fahrenheit_para_Kelvin:

K=(F−32.0)×( 9.05.0 )+273.15.

- Kelvin_para_Celsius:

C=K−273.15

- Kelvin_para_Fahrenheit:

F=(K−273.15)×(5.0/9.0)+32.0
