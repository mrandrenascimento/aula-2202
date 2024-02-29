#include <stdio.h>
#include <stdlib.h>
#include  <locale.h>
void cabecalho(){
	setlocale(LC_ALL,"");
	system("cls\\clear");
	printf("\n\tSENAI DENDEZEIRO\n");
	fflush(stdin);
}
int main(){
	char nome[500];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, media, soma;
	
	cabecalho();
	printf("Digite seu Nome: ");
	scanf("%s",&nome);
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	cabecalho();
	printf("Digite sua Primeira Nota: ");
	scanf("%f",&primeiraNota);
	printf("Digite sua Segunda Nota: ");
	scanf("%f",&segundaNota);
	printf("Digite sua Terceira Nota: ");
	scanf("%f",&terceiraNota);
	
	soma=primeiraNota+segundaNota+terceiraNota;
	media=soma/3;
	
	cabecalho();
	printf("Nome: %s \n",nome);
	printf("Idade: %i \n",idade);
	printf("Primeira Nota: %f \n",primeiraNota);
	printf("Segunda Nota: %f \n",segundaNota);
	printf("Terceira Nota: %f \n",terceiraNota);
	
	cabecalho();
	printf("Média: %.2f \n",media);
		
		if(media<=7){
		printf("\n\tREPROVADO");
	}else{
		printf("\n\tAPROVADO");
	}return 0;
}