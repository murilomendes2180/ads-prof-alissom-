#include <stdio.h>
#include <string.h>
#include <conio.h>

char tras(char texto[100]){
	int tam_str,i;
	tam_str = strlen(texto)-1;
	for (i=tam_str;i>=0;i--)
		printf("%c",texto[i]);
	
}

void main(){
	char texto[100];
	printf("informe o texto:");
	gets(texto);
	tras(texto);
}
