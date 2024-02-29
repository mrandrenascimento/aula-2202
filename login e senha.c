#include <stdio.h>
#include <stdlib.h>
//Bibliotecas
#include <locale.h> 
#include<string.h>
void cabecalho(){
	
	setlocale(LC_ALL, "");
	system("cls\\clear");
	printf("\n=== SENAI DENDEZEIRO ===\n");
	fflush(stdin);
}
int main(){
	char loginusuario[100]="André"; 
	char senhausuario[100]="123456";
	char login[100], senha[100];
	
	cabecalho();
	printf("Digite seu Login: ");
	scanf("%s",&login);
	printf("Digite sua Senha: ");
	scanf("%s",&senha);
	
	cabecalho();
	//if(login==loginusuario && senha==senhausuario){
	
	if(strcmp (login,loginusuario)==0 && strcmp (senha, senhausuario)==0){
		printf("\n\tBEM VINDO");
	}else {
		printf("\n\tLOGIN OU SENHA INVALIDOS");
	}
	return 0;
}
