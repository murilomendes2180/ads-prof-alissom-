#include <stdio.h>
#include <conio.h>

void main(){
	float comp, alt, largura,azulejo,area;
	printf("informe o complimento:");
	scanf("%f", &comp);
	printf("informe a altura:");
	scanf("%f", &alt);
	printf("informe a largura:");
	scanf("%f", &largura);
	
	area = (largura * alt * 2) + ( comp * alt * 2);
	azulejo = area/1.5;
	
	printf("ira precisar compra %0.2f",azulejo);
}
