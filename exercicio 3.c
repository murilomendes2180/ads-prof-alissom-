#include <stdio.h>
#include <conio.h>

void main(){
	int cod;
	
	printf("informe o codigo");
	scanf("%d", &cod);
	
	if(cod == 1){
		printf("região sul");
	}
	else 
		if(cod == 2){
			printf("região norte");
		}
		else 
			if(cod == 3){
				printf("região leste");
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
							printf("região Centro-Oeste");
						}
						else 
							if(cod == 11){
								printf("região Noroeste");
						}
	printf("eara na região %d",cod);
						
}
