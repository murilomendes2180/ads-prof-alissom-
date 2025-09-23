#include <stdio.h>
#include <string.h>
#include <conio.h>

char *este(int num){
	if (num == 0 ){
	return "zero";
}
else
	if(num == 1){
	return "um";
}
if (num == 2){
	return "dois";
}

if (num == 3){
	return "três";
}
else
	if(num == 4){
	return "quatro";
}
if (num == 5){
	return "cinco";
}
else
	if(num == 6){
	return "seis";
}
if (num == 7){
	return "sete";
}
else
	if(num == 8){
	return "oito";
}
if (num == 9){
	return "nove";
}
else
	if(num == 10 ){
	return "dez";
}

else{
	return " numero invalido";
}

}
void main(){
int num;	
printf("informe a num de 0 ao 10:");
scanf("%d",&num);
printf("numero: %s\n", este(num));
}
