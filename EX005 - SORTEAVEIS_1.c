#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
    /*EX005 Receba como entrada um número inteiro de 3 dígitos (por exemplo, 123). Extraia o dígito da
casa das dezenas desse número. Mostre esse dígito como resultado.
Para ilustrar, se o número de entrada for 123, o dígito da casa das dezenas é 2.*/

    
 
        int valor, dezena;
 
        printf("Digite um numero com 3 digitos para extrair sua dezena: \n");
        scanf("%d", &valor);
 
 
        dezena = (valor/10) %10;
 
 
        printf("O resultado foi: %d", dezena);
 
 
 
 
    return 0;
}
