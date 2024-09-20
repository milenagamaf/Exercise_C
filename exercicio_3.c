#include <stdio.h>
#include <locale.h>
#include <string.h>
#define Tam 5

struct Aluno{
	char nome[50];
	int qtd_faltas;
	int percent_faltas;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	struct Aluno Turma[Tam]; 
	
	int i, cont_reprov=0; 
	
	for(i=0;i<Tam;i++){
		printf("Digite o nome do aluno: ");
		gets(Turma[i].nome);
		printf("Digite a quantidade de faltas: ");
		scanf("%d", &Turma[i].qtd_faltas);
		getchar();
		Turma[i].percent_faltas=(Turma[i].qtd_faltas*100)/20;
		if(Turma[i].percent_faltas>25)
			cont_reprov++;
	}
	
	for(i=0;i<Tam;i++){
		printf("Nome: %s\n", Turma[i].nome);
		printf("Quantidade de faltas: %d\n", Turma[i].qtd_faltas);
		printf("Percentual de faltas: %d\n\n", Turma[i].percent_faltas);
	}
	
	printf("Quantidade de alunos reprovados: %d", cont_reprov);
}