#include <stdio.h>

int main() {
    int altura, i, j;

    printf("Digite a altura das pirâmides: ");
    scanf("%d", &altura);

    for (i = 1; i <= altura; i++) {
        // Imprime espaços em branco à esquerda na primeira pirâmide
        for (j = 1; j <= altura - i; j++) {
            printf(" ");
        }

        // Imprime os caracteres '#' na primeira pirâmide
        for (j = 1; j <= i; j++) {
            printf("#");
        }

        // Imprime espaços em branco entre as duas pirâmides
        printf("  ");

        // Imprime os caracteres '#' na segunda pirâmide (reversa)
        for (j = 1; j <= i; j++) {
            printf("#");
        }

        printf("\n"); // Mova para a próxima linha
    }

    return 0;
}
