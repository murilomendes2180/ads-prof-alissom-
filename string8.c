#include <stdio.h>
#include <string.h>
#include <conio.h>

char *mes(int data){
	if (data ==1 ){
	return "Janeiro";
}
else
	if(data ==2){
	return "Fevereiro";
}
if (data ==3){
	return "Março";
}

if (data ==4){
	return "Abril";
}
	else
	if(data ==5){
	return "Maio";
}
if (data ==6){
	return "Junho";
}
else
	if(data ==7){
	return "Julho";
}
if (data ==8){
	return "Agosto";
}

else
	if(data ==9){
	return "Setembro";
}
if (data ==10){
	return "Outubro";
}
else
	if(data ==11 ){
	return "Novembro";
}
if (data == 12){
	return "Dezembro";
}
else{
	return " mes invalido
}
}
void main(){
int data;	
printf("informe a data:");
scanf("%d",&data);
printf("mes\n", mes(data));
}
