#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Tainara

int main() {

char country[1];
int state;

int Pop;
float PIB;
int Tur;
float area;

    printf("PAÍS: \n");
    scanf("%s", &country);

    printf("ESTADO: \n");
    scanf("%d", &state);

    printf("População: \n");
    scanf("%d", &Pop);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Área: \n");
    scanf("%f", &area);

    printf("N° de Pontos Turísticos: \n");
    scanf("%d", &Tur);

printf("CARTA: %s %d\n", country, state);
printf("População: %d\n - PIB: %f\n - Área: %f\n - N° de Pontos Turísticos: %d\n", Pop, PIB, area, Tur);


return 0;



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


}
