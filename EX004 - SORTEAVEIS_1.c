
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    /*EX004 - Escrever um algoritmo que recebe como entrada a distância percorrida em uma viagem e o
tempo gasto para percorrê-la. Calcule a velocidade média (Vm) do veículo durante a viagem
e imprima para o usuário.
Obs.: Vm = distancia/tempo
*/
 
    float tempo, distancia, vm;
 
    printf("Insira o tempo gasto da sua viagem: \n");
    scanf("%f", &tempo);
 
    printf("Insira a distancia que voce percorreu em sua viagem: \n");
    scanf("%f", &distancia);
 
    vm = distancia/tempo;
 
    printf("A velocidade media foi %2.f", vm);
 
 
 
    return 0;
}
