#include <stdio.h>
int main(){
	float primeironumero, segundonumero;
	float soma, subtracao, multiplicacao,divisao, media;
	
	printf("Digite o primeiro numero: ");
	scanf("%f",&primeironumero);
	printf("Dogite o Segundo numero: ");
	scanf("%f",&segundonumero);
	
	soma=primeironumero+segundonumero;
	subtracao=primeironumero-segundonumero;
	divisao=primeironumero/segundonumero;
	multiplicacao=primeironumero/segundonumero;
	
	media=(primeironumero+segundonumero)/2;
	
	
	printf("primeiro numero: %f \n",primeironumero);
	printf("Segundo Numero: %f \n", segundonumero);
	printf("Soma: %f \n",soma);
	printf("Subtra��o: %2 f \n",subtracao);
	printf("Multiplica��o: %f \n", multiplicacao);
	printf("Divis�o: %f \n", divisao);
	printf("Media: %f \n");
	
	return 0;
}
