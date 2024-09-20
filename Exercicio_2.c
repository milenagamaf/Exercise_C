#include <stdio.h>
#include <locale.h>

struct Ficha{
	int sexo, idade;	
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	struct Ficha cartao; 
	int total=0, somaidades=0, totalM18_25=0, totalH=0;
	
	printf("Digite a idade: ");
	scanf("%d", &cartao.idade);
	
	while(cartao.idade>=0){
		
		printf("Digite o sexo, 0 para masculino e 1 para feminino: ");
		scanf("%d", &cartao.sexo);
		total++;
		somaidades=somaidades+cartao.idade;
		if(cartao.sexo==1 && cartao.idade>=18 && cartao.idade<=25){
			totalM18_25++;
		}
		if(cartao.sexo==0){
			totalH++;
		}
		
		printf("Digite a idade: ");
		scanf("%d", &cartao.idade);
		
	}
	printf("Média de idades: %d\n", somaidades/total);
	printf("Quantidade de mulheres com idade entre 18 e 25 anos: %d\n", totalM18_25);
	printf("Total de homens: %d\n", totalH);
}