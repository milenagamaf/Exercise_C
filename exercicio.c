#include <stdio.h>
#include <locale.h>
#define Tam 3

struct Pedido{
	long numpedido;
	int dia,mes,ano;
	int qtd;
	float Pr_unit, Pr_total;	
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	struct Pedido Comanda[Tam]; 
	
	float valor_comanda=0;
	int qtd_pedidos=0, i;
	
	for(i=0;i<Tam;i++){
		printf("Digite o número do pedido: ");
		scanf("%ld", &Comanda[i].numpedido);
		printf("Digite a data neste formato DD/MM/AA: ");
		scanf("%d/%d/%d", &Comanda[i].dia, &Comanda[i].mes, &Comanda[i].ano);
		printf("Digite a quantidade de itens: ");
		scanf("%d", &Comanda[i].qtd);
		printf("Digite o valor do iten: ");
		scanf("%f", &Comanda[i].Pr_unit);
		Comanda[i].Pr_total=Comanda[i].qtd * Comanda[i].Pr_unit;
		qtd_pedidos++;
		valor_comanda=valor_comanda + Comanda[i].Pr_total;
	}
	
	printf("Quantidade de pedidos: %d\n", qtd_pedidos);
	printf("Total dos pedidos: %.2f", valor_comanda);
}