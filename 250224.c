

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca
void cabecalho(){
	

	system("cls\\clear");
	printf("\n=== SENAI DENDEZEIRO ===\n");
	fflush(stdin);
}

int main(){
	setlocale(LC_ALL, "");
	char nome[200];
	int idade;
	float primeiranota, segundanota, terceiranota, media;
	
	cabecalho();
	printf("Digite seu Nome: ");
	scanf("%s",&nome);
	printf("Digite sua Idade: ");
	scanf("%i",&idade);
	
	cabecalho();
	printf("Digite a Primeira Nota: ");
	scanf("%f",&primeiranota);

	cabecalho();
	printf("Digite a Segunda Nota: ");
	scanf("%f",&segundanota);

	cabecalho();
	printf("Digite a terceira Nota: ");// na tecla crlt mais espaça para nao ter erros
	scanf("%.2f",&terceiranota);
	
	media=(primeiranota+segundanota+terceiranota)/3;
	
	cabecalho();
	
	printf("\n Média: %.2f",media);

	if(media>=7){
	printf("\nAPROVADO");}
	else{ printf("\nREPROVADO");
	}
	
	
	
	
	return 0;
}

