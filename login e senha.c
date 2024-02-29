#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Biblioteca
void cabecalho(){
	
	setlocale(LC_ALL, "");
	system("cls\\clear");
	printf("\n=== SENAI DENDEZEIRO ===\n");
	fflush(stdin);
}
int main(){
	float loginusuario=1234; 
	float senhausuario=123456;
	float login, senha;
	
	cabecalho();
	printf("Digite seu Login: ");
	scanf("%f",&login);
	printf("Digite sua Senha: ");
	scanf("%f",&senha);
	
	cabecalho();
	if(login==loginusuario && senha==senhausuario){
		printf("\n\tBEM VINDO");
	}else {
		printf("\n\tLOGIN OU SENHA INVALIDOS");
	}
	return 0;
}
