#include <stdio.h>

int main() {

    /*  EX006 - Escrever um algoritmo em C que recebe como entrada um inteiro que representa uma data
no formato ddmmaa e imprima na tela a seguinte saída:
Dia: dd Mês: dd Ano: dd
*/
    int data, dia, mes, ano;

    printf("Digite sua data somente com numeros no formato ddmmaa: \n");
    scanf("%d", &data);

    // Extraindo o dia
    dia = data / 10000;
    // Extraindo o mês
    mes = (data / 100) % 100;
    // Extraindo o ano
    ano = data % 100;

    printf("Dia: %02d\t Mes: %02d\t Ano: %02d\n", dia, mes, ano);

    return 0;
}
