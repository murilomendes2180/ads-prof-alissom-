#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

int numero;

srand (time(NULL));
numero = rand() % 20 + 1;

printf(" %d",numero);

if(numero == 20){
	printf(":acerto critico");
}
if(numero == 1){
	printf(":error critico ");
}


}

