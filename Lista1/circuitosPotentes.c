/*Em um circuito elétrico, a potência consumida por um resistor pode ser calculada por:
P = V x I
onde:
    P é a potência em watts (W),
    V é a tensão em volts (V),
    I é a corrente em amperes (A).
ada circuito é representado por uma struct chamada Circuito, contendo:
    1. Nome do circuito (string de até 30 caracteres)
    2. Tensão (float)
    3. Corrente (float)
    4. Potência calculada (float)
Escreva um programa que:
    1. Leia os dados de N circuitos elétricos informados pelo usuário.
    2. Calcule a potência de cada um.
    3. Exiba os circuitos em ordem decrescente de potência.

Dica: 
Pesquise sobre o algorítmo de ordenação Bubble Sort */

#include <stdio.h>
#include <string.h>

struct Circuito{
    char nome[31];
    float tensao;
    float corrente;
    float potencia;
};


void ordenarCircuitos(struct Circuito circuitos[], int n){
    struct Circuito temp;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(circuitos[j].potencia < circuitos[j+1].potencia){
                temp = circuitos[j];
                circuitos[j] = circuitos[j+1];
                circuitos[j+1] = temp;
            }
        }
    }
}

int main(){

    int n;
    struct Circuito circuitos[20];


    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        
        scanf(" %[^\n]", circuitos[i].nome);

        scanf("%f", &circuitos[i].tensao);

        scanf("%f", &circuitos[i].corrente);

        circuitos[i].potencia = circuitos[i].tensao * circuitos[i].corrente;

        
    }


    ordenarCircuitos(circuitos, n);

    printf("Circuitos em ordem decrescente de potencia:\n");

    for(int i = 0; i < n; i++){

        printf("%s - Potencia: %.2f W\n", circuitos[i].nome, circuitos[i].potencia);

    }

    return 0;





}