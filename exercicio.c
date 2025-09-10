#include <stdio.h>
#include <conio.h>

void main(){
	float raio,area;
	
	printf("<<calcular area do circulon>>\n");
	printf("informe o raio do circulo:");
	scanf("%f", &raio);
	area = 3.14 * raio * raio;
	printf("area: %0.2f",area);
}
