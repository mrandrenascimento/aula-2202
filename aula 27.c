
#include <stdio.h>

int main(){
	char nome {200};
	char sexo;
	int idade;
	float peso;
	
	//pesquisar o "&" comercial
	
	printf("digite nome");
	scanf("%s", &nome);
	
	fflush(stdin);
	
	printf("digite o seu sexo - (F) ou (M): ");
	scanf("%c",&sexo);
	
	printf("digite sua idade: ");
	scanf("%i",&idade);
	
	printf("digite seu peso: ");
	scanf("%f",&peso);
	
	printf("Seu nome:%s \n", nome);
	printf("Seu Sexo: %c \n", sexo);
	printf("Sua idade: %i \n",idade);
	printf("Seu peso:%f \n",peso);
	
	
	
	return 0;
}
