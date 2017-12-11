#include <stdio.h>
#include <stdlib.h>

float x,y,a,b,res;
int main() 
{
     printf("Este es un programa para calcular la experesion (x+y)^2(a-b). \n \n Inroduzca los valores de las variables x,y,a,b : \n");
     scanf("%f %f %f %f", &x,&y,&a,&b);	
	res=((x+y)*(x+y))*(a-b);
	 printf("\n El resultado de esta operacion es: %.3f",res);
	
	
	system ("pause");
	return 0;
}
