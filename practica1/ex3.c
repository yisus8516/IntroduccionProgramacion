#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float altura,radio,lado,a,v,pi;
#define pi 3.14159265359
int main() 
{
     printf("Este es un programa para calcular el area y volumen de un cono. \n \n Inroduzca el radio y la altura del cono: \n");
     scanf("%f %f",&radio,&altura);
	 lado=sqrt((pow(altura,2))+(pow(radio,2)));	
	 a=((2*pi*radio*(lado/2))+(pi*radio*radio));
	 v=((.3333333333333)*pi*radio*radio*altura);
	 printf("\n El area y volumen de este cono son: Area: %.3f	Volumen: %.3f",a,v);
	
	
	system ("pause");
	return 0;
}
