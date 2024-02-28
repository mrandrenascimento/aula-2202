#include <stdio.h>
#include<stdlib.h>

//Exercícios

//Faça um algoritmo que solicite do usuário o valor do
//salário de um usuário, calcule quantos salários
//mínimos esse usuário ganha e imprima na tela o
//resultado.

//(Base para o salário mínimo R$ 1.412,00).

void cabecalho(){

	system("cls\\clear");
	printf("\n=== SENAI DENDEZEIRO ===\n");
}
int main(){

//declarando as variaveis 

float salariobase=1412.00;
float salarioinformado, quantidadesalario;

cabecalho();
printf("Digite o Salario: "); 
scanf("%f",&salarioinformado);
	
	quantidadesalario=salarioinformado/salariobase;

cabecalho();	
	printf("Qauntidade Salario: %.2f \n",quantidadesalario);//%.2F PARA DEFINIR AS CASA DECIMEIS DOS NUMEROS, NESTE CASO SÃO DUAS CASAS DECIMEIS QUE APARECERA NA TELA
	return 0;
	
}
