#include <stdio.h>
#include <conio.h>

void main(){
	int cod;
	
	printf("informe o codigo");
	scanf("%d", &cod);
	
	if(cod == 1){
		printf("regi�o sul");
	}
	else 
		if(cod == 2){
			printf("regi�o norte");
		}
		else 
			if(cod == 3){
				printf("regi�o leste");
			}
			else
				if(cod == 4){
					printf("regiao oeste");
				}
				else
					if(cod == 5 || cod == 6){
						printf(" regiao Nordeste");
					}
					else
						if(cod >=7 && cod == 9){
							printf(" regiao Nordeste");
						}
						if(cod == 10){
							printf("regi�o Centro-Oeste");
						}
						else 
							if(cod == 11){
								printf("regi�o Noroeste");
						}
	printf("eara na regi�o %d",cod);
						
}
