

#include <stdio.h>
#include <stdlib.h>
void cabecalho(){

	system("cls\\clear");
	printf("\n=== SENAI ===\n");
}
int main (){
	
	float numero;
	
	cabecalho();
	
	printf("Digite um Número: ");
	scanf("%f",&numero);
	
	cabecalho();
	

		if(numero %2==0){
		printf("Número Par")
	}else{printf("Número Impar")}
	
	return 0;
}

