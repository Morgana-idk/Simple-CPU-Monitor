#include <stdio.h>

int main() {
    
    FILE *historico = fopen("historico.txt", "a");

    float nota;
    float nota2;
    char nome[100];

    printf("Bem-vindo ao calculador de notas! \n");
    printf("==================================== \n");

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("\nColoque sua nota: ");
    scanf("%f", &nota);

    printf("\nColoque sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Calculando notas.. \n");
    float media = (nota + nota2) / 2;

    fprintf(historico, "=====================\n");
    fprintf(historico, "---------NOTAS-------\n");
    fprintf(historico, "| nome | nota 1 | nota 2 | média |\n");
    fprintf(historico, "| %s | %.2f | %.2f | %.2f |\n", nome, nota, nota2, media);
    fprintf(historico, "=====================\n");

    fclose(historico);

    return 0;
}