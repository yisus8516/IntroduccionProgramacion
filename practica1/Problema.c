#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159265359

int l;
float p,p2,d;
float h,v;
int main() 
{
     printf("Este es un programa para calcular el volumen del un fluido en un tanque cilindrico . \n \n Inroduzca el tipo de liquido que se encuentra en el tanque 1-agua 2-diesel: \n");
     scanf("%d",&l);
     printf("ingresa la presion en el fondo del tanque que arroja el sensor en BAR \n");
     scanf("%f",&p);
     printf("ingresa el diametro del tanque \n");
     scanf("%f",&d);
     p2=p*100000;
	 h=(l==1?p2/(1000*9.81):p2/(820*9.81));
	 v=((pi*(d/2)*(d/2))*h);
	 printf("El volumen en metros cubicos es igual a: %.2f \n",v);
	system ("pause");
	return 0;
}
