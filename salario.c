#include <stdio.h>
#include<stdlib.h>

//Exerc�cios

//Fa�a um algoritmo que solicite do usu�rio o valor do
//sal�rio de um usu�rio, calcule quantos sal�rios
//m�nimos esse usu�rio ganha e imprima na tela o
//resultado.

//(Base para o sal�rio m�nimo R$ 1.412,00).

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
	printf("Qauntidade Salario: %.2f \n",quantidadesalario);//%.2F PARA DEFINIR AS CASA DECIMEIS DOS NUMEROS, NESTE CASO S�O DUAS CASAS DECIMEIS QUE APARECERA NA TELA
	return 0;
	
}
