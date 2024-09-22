#include <stdio.h>
#define vet 5
#define caracteres 25

int main() {
    char vetor[vet][caracteres];  // Vetor de 5 strings, cada uma com espaço para 19 caracteres + '\0'

    // Coletando 5 entradas do usuário
    for (int i = 0; i < vet; i++) {
        printf("Digite até 5 caracteres (podem conter espaços) [Entrada %d]: ", i + 1);
        fgets(vetor[i], sizeof(vetor[i]), stdin);  // Captura a entrada do usuário
    }

    // Imprimindo as entradas no segundo loop
    for (int i = 0; i < 5; i++) {
        printf("Os dados digitados na entrada %d foram: %s", i + 1, vetor[i]);
    }

    return 0;
}
