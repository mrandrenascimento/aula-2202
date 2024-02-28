

#include <stdio.h>
#include <stdlib.h>
void cabecalho(){

	system("cls\\clear");
	printf("\n=== SENAI DENDEZEIRO ===\n");
}
int main(){
	
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
	printf("Digite a Segunda Nota: ");
	scanf("%f",&segundanota);
	printf("Digite a terceira Nota: ");
	scanf("%f",&terceiranota);
	
	cabecalho();

	media=(primeiranota+segundanota+terceiranota)/3;
	if("%.2f",media>=7){
	printf("%f\nAPROVADO");}
	else{ printf("%f\nREPROVADO");
	}
	
	
	
	return 0;
}

