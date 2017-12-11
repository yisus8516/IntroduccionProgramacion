#include <stdio.h>
#include <stdlib.h>

float pies,yardas,pulgadas,centimetros,metros;
int main() 
{
     printf("Este es un programa para calcular la equivalencia en pies, yardas, cemtimetros y metros a partir de un numero definido de pies. \n \n Inroduzca la cantidad de pies a convertir : \n");
     scanf("%f",&pies);	
	yardas=pies/3;
	pulgadas=pies*12;
	centimetros=pulgadas*2.54;
	metros=centimetros/100;
	 printf("\n El resultado de esta conversion es: \n pies:%f \n yardas: %f \n pulgadas: %f \n centimetros: %f \n metros: %f \n",pies,yardas,pulgadas,centimetros,metros);
	
	
	system ("pause");
	return 0;
}
