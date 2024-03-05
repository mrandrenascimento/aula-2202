#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Bibliotecas
#include<string.h>
void cabecalho(){
	
	setlocale(LC_ALL, "");
	system("cls\\clear");
	printf("\n=== SENAI DENDEZEIRO ===\n");
	fflush(stdin);
}
int main(){
	int i, nota, soma;
	float media;
	
	
	cabecalho();
		for(i=1;i<=4;i++){
		printf("Digite %iª Nota: ",i);
		scanf("%i",&nota);
		soma=soma+nota;
		}
		
		cabecalho();
		media=soma/4;
	
	printf("Média: %.2f\n",media);
			
return 0;		
	}
	
	
