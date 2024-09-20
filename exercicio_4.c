#include <stdio.h>
#include <locale.h>
#include <string.h>
#define Tam 5

struct Banda{
	char nome[50];
	char estilo[25];
	int qtd_albuns;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	struct Banda Musicos[Tam]; 
	
	int i; 
	
	for(i=0;i<Tam;i++){
		printf("Digite o nome da banda: ");
		gets(Musicos[i].nome);
		printf("Digite o estilo da banda: ");
		gets(Musicos[i].estilo);
		printf("Digite a quantidade de álbuns: ");
		scanf("%d", &Musicos[i].qtd_albuns);
		getchar();
	}
	
	
	for(i=0;i<Tam;i++){
		if(Musicos[i].qtd_albuns>5){
			printf("Nome da banda: %s\n", Musicos[i].nome);
			printf("Estilo da banda: %s\n", Musicos[i].estilo);
			printf("Quantidade de álbuns: %d\n\n", Musicos[i].qtd_albuns);
		}
	}
}