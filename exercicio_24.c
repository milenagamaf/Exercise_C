#include <stdio.h>

#define L 3
#define C 3

int main() {
    int matriz[L][C],i,j,linha = -1, coluna = -1;

    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("Digite um número: ");
            scanf("%d",&matriz[i][j]);
        }
    }
    
    int valor;  
    printf("Digite o valor a ser encontrado: ");
    scanf("%d",&valor);// Valor a ser encontrado
    
    // Procurando o valor na matriz
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (matriz[i][j] == valor) {
                linha = i;
                coluna = j;
                break; // Sai do loop se o valor for encontrado
            }
        }
        if (linha != -1 && coluna != -1) {
            break; // Se a posição foi encontrada, sai do loop externo
        }
    }

    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    // Verificando se o valor foi encontrado
    if (linha != -1 && coluna != -1) {
        printf("Valor %d encontrado na posição: Linha %d e Coluna %d\n", valor, linha+1, coluna+1);
    } else {
        printf("Valor %d não encontrado na matriz.\n", valor);
    }

    return 0;
}
