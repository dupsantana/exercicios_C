#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
 
int main()
{
    /*EX007 - Construa um algoritmo em C que, tendo como dados de entrada dois pontos quaisquer no
plano, P(x1,y1) e P(x2,y2) informados pelo usuário, calcule a distância entre eles. A fórmula
que efetua tal cálculo é:
*/
    
    double x1, y1, x2, y2, distancia;
 
 
    printf("Digite o primeiro valor do plano 1, x1: \n");
    scanf("%lf", &x1);
    printf("Digite o segundo valor do plano 1, y1: \n");
    scanf("%lf", &y1);
 
    printf("Agora digite o primero valor do plano 2, x2: \n");
    scanf("%lf", &x2);
    printf("E o segundo valor do plano 2, y2: \n");
    scanf("%lf", &y2);
 
 
    distancia = sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
 
 
    printf("A distancia entre os pontos foi de: %.2lf", distancia);
 
 
 
    return 0;
}
