

#include <stdio.h>
#include <stdlib.h>
int main(){
	
	char nome [500];
	int idade;
	float primeiranota, segundanota, terceiranota, quartanota, media;
	
	printf("Digite o seu Nome: ");
	scanf("%c",&nome);
	
	printf("Digite sua Idade: ");
	scanf("%i",&idade);
	
	printf("Digite sua Primeira Nota: ");
	scanf("%f",&primeiranota);
	
	printf("Digite sua Segunda Nota: ");
	scanf("%f",&segundanota);
	
	printf("Digite sua Terceira Nota: ");
	scanf("%f",&terceiranota);
	
	printf("Digite a sua Quarta Nota: ");
	scanf("%f",&quartanota);
	
	media=(primeiranota+segundanota+terceiranota+quartanota)/4;
	
	printf("Nome: %c \n",nome);
	printf("Idade: %i \n", idade);
 	printf("Primeira Nota: %f \n",primeiranota);
 	printf("Segunda Nota: %f \n",segundanota);
 	printf("Terceira Nota: %f \n", terceiranota);
 	printf("Quarta Nota: %f \n",quartanota);
 	printf("Média: %f",media);
 	
 	return 0;
}
