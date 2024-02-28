#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
void cabecalho(){
	setlocale(LC_ALL,"portuguese");
	system("cls\\clear");
	printf("\n\tSENAI DENDEZEIRO\n");
	fflush(stdin);
}
int main(){
	int num;
	cabecalho();
	printf("Digite um Número: ");
	scanf("%i",&num);
	cabecalho();
	if(num %2==0){
		printf("ESTE NUMERO PAR");
	}else{
		printf("ESTE NUMERO IMPAR");
	}
	
	return 0;
}