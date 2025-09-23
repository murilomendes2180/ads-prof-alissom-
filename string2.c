#include <stdio.h>
#include <string.h>
#include <conio.h>

char *cat(int id){
	if (id >= 5 && id <= 7){
	return "infantil a";
}
else
	if(id >= 8 && id<= 10){
	return "infantil d";
}
if (id >=11 && id <= 13){
	return "Juvenil A";
}
else
	if(id >= 14 && id <= 17){
	return "Juvenil B";
}
if (id >=18){
	return "adulto";
}
else{
	return " fora da faixa";
}
	
}
void main(){
int id;	
printf("informe a idade:");
scanf("%d",&id);
printf("Categoria: %s\n", cat(id));
}
