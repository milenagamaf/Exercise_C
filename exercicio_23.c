#include <stdio.h>
#include <locale.h>
#define L 3
#define C 3

    int main(){
        setlocale(LC_ALL,"Portuguese");
               
                int matriz[L][C],matriz_b[L][C],i,j;

        for(i=0;i<L;i++){
            for(j=0;j<C;j++){
                printf("Digite um número: ");
                scanf("%d",&matriz[i][j]);
            }
        }

    //atribuir matriz    
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            matriz_b[i][j]=matriz[i][j];
        }
    }

    printf("Matriz A\n");
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("Matriz B\n");
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%d ",matriz_b[i][j]);
        }
        printf("\n");
    }

    }