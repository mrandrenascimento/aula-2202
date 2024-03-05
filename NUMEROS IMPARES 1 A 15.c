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
	int i;
	cabecalho();
	printf("NÚMEROS IMPAR ENTRE 1 E 15");

	for (i=1;i<=15;i++){
		if(i %2==1){
			printf("\n%d",i);
		
}}
return 0;		
}
