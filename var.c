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
	for (i=1;i<=10;i++){
		printf("%d*%d=%d \n",2,i,2*i);	}
return 0;		
}

