#include <stdio.h>
#include <string.h>

int main() {
    FILE *entrada = fopen("myscript.lua", "r");
    FILE *saida = fopen("newscript.lua", "w");
    char linha[256];

    if (entrada == NULL){
        printf("Voce precisa criar um arquivo chamado myscript.lua\nou move-lo para a pasta do app e renomea-lo para myscript.lua\n\n");
        return 1;
    }

    while (fgets(linha, sizeof(linha), entrada)){
        char *comentario = strstr(linha, "--");
        
        if (comentario != NULL){
            *comentario = '\n';
            *(comentario + 1) = '\0';
        }
        fputs(linha, saida);
    }
    
    fclose(saida);
    fclose(entrada);

    printf("Script limpo com sucesso!\n");
    printf("Programa terminou.\n");
    return 0;
}
