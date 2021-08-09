#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> //colocar acentuação no prompt

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//STRING
int main(void) 
{
	//aceitar acentuação no prompt
	setlocale(LC_ALL, "Portuguese");
	
	char str[]="oi"; //atribuindo valor a string/char
	
	printf(" Valor atual: %s", str);//exibindo o valor atribuido a str
	
	printf("\n Maiúscula: %s", strupr(str)); //deixando o valor "oi" que foi atribuido com os caracteres Maiúsculos
	printf("\n Minúscula: %s", strlwr(str)); //deixando o valor "oi" que foi atribuido com os caracteres Minúsculos
	
	printf("\n Tamanho: %i", strlen(str)); //contando quantos caracteres possui a str
	
	printf("\n Substituir valores: %s", strcpy(str,"Teste 2")); //trocando o valor da str "oi" para "teste 2"

	printf("\n Comparar: %i \n 0 para igual e qualquer número diferente ", strcmp("Teste 2",str)); //caso o que for digitado no strcmp seja igual ao valor str, retornar 0
	
	printf("\n Substituir valores colocando posição: %s", strncpy(str,"Gustavo",1)); //substituir um valor X(neste exemplo foi 1) de caracteres da str "teste 2"(ficando geste 2 pois a primeira letra do nome escrito é G)
	
	//Atribuindo novo Valor
	strcpy(str,"teste");
	
	//Concatenando/Juntando a str "teste" com a str "5"
	printf("\n Concatenar: %s", strcat(str,"5"));
	
	
}
