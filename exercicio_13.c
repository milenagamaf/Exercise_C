#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
		
		int opcao;
		float num,num2;
		
		printf("Digite o primeiro número: ");
		scanf("%f",&num);
		
		printf("Digite o segundo número: ");
		scanf("%f",&num2);
		
		
		
		printf("Digite a operação desejada:\n");
		printf("1. Soma\n");
		printf("2. Subtração\n");
		printf("3. Multiplicação\n");
		printf("4. Divisão\n");
		printf("Escolha uma operação (1-4): ");
		scanf("%d",&opcao);
		
		switch(opcao){
			case 1:
				printf("Resultado: %.2f + %.2f = %.2f",num,num2,num+num2);
				break;
				
			case 2:
				printf("Resultado: %.2f - %.2f = %.2f",num,num2,num-num2);
				break;
				
			case 3:
				printf("Resultado: %.2f * %.2f = %.2f",num,num2,num*num2);
				break;
				
			case 4:
				 while(num<=0 || num2<=0){
			    	printf("Não é permitido divisão por 0");
					
					printf("\nDigite o primeiro número: ");
					scanf("%f",&num);
		
					printf("Digite o segundo número: ");
					scanf("%f",&num2);
     
  }		
		
				printf("Resultado: %.2f / %.2f = %.2f",num,num2,num/num2);
				break;
				
			default:
				printf("Opção inválida!");
				break;
				
				
		}
		}
