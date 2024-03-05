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
	int numero, pares=0 , impares=0,i;
	
	for(i=1;i<=5;i++){
	
	printf("Digite o %iª Valor; ",i);
	scanf("%i",&numero);
	
	if(numero%2==0){
	
	pares=pares+1;
	}else{impares++;
	
	}}
printf("\nQuantidade de Pares: %i\n",pares);
printf("\nQuantidade de Impares: %i\n",impares);

return 0;
}


