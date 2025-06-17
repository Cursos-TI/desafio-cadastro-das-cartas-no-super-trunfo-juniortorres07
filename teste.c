#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char estado;
    char codcarta [2];
    char nomecidade [20];
    float populacao;
    float area;
    float pib;
    int ptur;
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
     printf ("Vamos lá cadastrar a primeira carta!\n\n");
     printf ("Insira o codigo da carta\n");
     scanf ("%s", codcarta);
     printf ("Digite o Estado\n");
     scanf ("%c", estado);
     printf ("Digite o nome da cidade\n");
     scanf ("%s", nomecidade);
     printf ("Digite a população\n");
     scanf ("%f", populacao);
     printf ("Digite a área\n");
     scanf ("%f", area);
     printf ("Digite o PIB\n");
     scanf ("%f", pib);
     printf ("Digite a quantidade de pontos turisticos\n");
     scanf ("%d", ptur);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     printf ("Codigo da carta: %s\n", codcarta);
     printf ("Estado: %c\n", estado);
     printf ("Nome da cidade: %s\n", nomecidade);
     printf ("População: %f\n", populacao);
     printf ("Área: %f Km\n", area);
     printf ("PIB: %f\n", pib);
     printf ("Pontos turisticos %d\n", ptur);
  
  
    return 0;
}
