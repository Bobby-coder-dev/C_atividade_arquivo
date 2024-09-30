#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char c;
    int linhas = 0, palavras = 0, caracteres = 0;
    int dentro_palavra = 0;


    printf("Digite o nome do arquivo: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", filename);
        return 1;
    }

    while ((c = fgetc(file)) != #include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char c;
    int linhas = 0, palavras = 0, caracteres = 0;
    int dentro_palavra = 0;


    printf("Digite o nome do arquivo: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", filename);
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {

        caracteres++;


        if (c == '\n') {
            linhas++;
        }


        if (isspace(c)) {
            dentro_palavra = 0;
        } else if (!dentro_palavra) {
            dentro_palavra = 1;
            palavras++;
        }
    }

   
    if (caracteres > 0 && c != '\n') {
        linhas++;
    }


    fclose(file);


    printf("Linhas: %d\n", linhas);
    printf("Palavras: %d\n", palavras);
    printf("Caracteres: %d\n", caracteres);

    return 0;
}EOF) {

        caracteres++;


        if (c == '\n') {
            linhas++;
        }


        if (isspace(c)) {
            dentro_palavra = 0;
        } else if (!dentro_palavra) {
            dentro_palavra = 1;
            palavras++;
        }
    }

   
    if (caracteres > 0 && c != '\n') {
        linhas++;
    }


    fclose(file);


    printf("Linhas: %d\n", linhas);
    printf("Palavras: %d\n", palavras);
    printf("Caracteres: %d\n", caracteres);

    return 0;
}
    char c;
    int linhas = 0, palavras = 0, caracteres = 0;
    int dentro_palavra = 0;


    printf("Digite o nome do arquivo: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", filename);
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {

        caracteres++;


        if (c == '\n') {
            linhas++;
        }


        if (isspace(c)) {
            dentro_palavra = 0;
        } else if (!dentro_palavra) {
            dentro_palavra = 1;
            palavras++;
        }
    }

   
    if (caracteres > 0 && c != '\n') {
        linhas++;
    }


    fclose(file);


    printf("Linhas: %d\n", linhas);
    printf("Palavras: %d\n", palavras);
    printf("Caracteres: %d\n", caracteres);

    return 0;
}
