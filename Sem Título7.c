

#include <stdio.h>
#include <stdlib.h>
void cabecalho(){

	system("cls\\clear");
	printf("\n=== SENAI ===\n");
}
int main (){
	
	float numero;
	
	cabecalho();
	
	printf("Digite um N�mero: ");
	scanf("%f",&numero);
	
	cabecalho();
	

		if(numero %2==0){
		printf("N�mero Par")
	}else{printf("N�mero Impar")}
	
	return 0;
}

