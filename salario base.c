#include <stdio.h>
#include <stdlib.h>
#include  <locale.h>
void cabecalho(){
	setlocale(LC_ALL,"");
	system("cls\\clear");
	printf("\n\tSENAI DENDEZEIRO\n");
	fflush(stdin);
}
int main(){
	float salariobase=1412.00, salario, totalsalario;
	
	cabecalho();
	printf("Digite seu Salario: ");
	scanf("%f",&salario);
	
	totalsalario=salario/salariobase;
	
	cabecalho();
	printf("Salario Total: %f \n",totalsalario);
	return 0;
}	
	