#include <stdio.h>
#include <stdlib.h>


int main()
{
 
 /* EX001 - Escreva um algoritmo em C que recebe do usuário o valor do raio de um círculo, calcula e
imprime o valor da área e do perímetro desse círculo.
Dados: área = pi * raio * raio; perímetro = 2 * pi * raio; pi = 3.14159. */
 
   
 
float raio, perimetro, area;
 
printf("Digite o valor do raio do seu circulo para descobrir o perimetro e sua area:  ");
scanf("%f", &raio);
 
area = (3.14*raio*raio) ;
perimetro = (2*3.14*raio);
 
printf("A area do seu circulo eh de: %0.2f \n", area);
printf("O perimetro do seu circulo eh de: %0.2f", perimetro);
 
 
 
    return 0;
}
