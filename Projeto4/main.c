#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //colocar acentua��o no prompt
#include <stdbool.h>
#include <string.h>

//Dados Heterogeneos(s�o dados que recebem v�rios dados dentro)

 //Criando a struct pessoa
struct pessoa
{
	char nome[50];
	char email[80];
};
int main(void) {
	struct pessoa p1;
	
	printf("\n=== Cadastro de Usu�rio ===\n");
	
	printf("Nome : ");
	scanf("%s%*c", &p1.nome);//o scanf recebe o nome digitado pelo usu�rio
	
	printf("Email : ");
	//fflush stdin para ler o teclado e fgets() para atribuir no string
	fflush(stdin);
	fgets(p1.email,80,stdin); 
	
	printf("\n === IMPRIMINDO ===\n");
	printf("\n Nome:");
	//puts imprime o string
	puts(p1.nome);
	print("\n Email: %s", p1.email);
	
	getch();
	
}
