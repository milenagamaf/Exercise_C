//encontrar o valor maior dentro de uma matriz
#include <stdio.h>
#include <locale.h>
#define L 3
#define C 3

    int main(){
        setlocale(LC_ALL,"Portuguese");
        int matriz[L][C],i,j,maior=matriz[0][0];

        for(i=0;i<L;i++){
            for(j=0;j<C;j++){
                printf("Digite um valor: ");
                scanf("%d",&matriz[i][j]);
                }
        }

        for (i = 0; i < L; i++) {
            for (j = 0; j < C; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];  // Atualiza o maior valor se encontrar um número maior
            }
        }
    }

    printf("O maior valor na matriz é: %d\n",maior);

    }