#include <stdio.h>
#include <stdlib.h>
#define c 1
#define f 0
int l;
float d;
float res;
int main() 
{
     printf("Este es un programa para calcular la equivalencia de grados centigrados a farenheigt y viceversa. \n \n Inroduzca la cantidad de grados seguido de su tipo 1-centigrados 2-farenheigt: \n");
     scanf("%f %d",&d,&l);
	 res=(l==1?(((1.8)*d)+32):(d-32)/(1.8));
    	if (l==1)
  	      {printf("\n El resultado es %f °F",res);
	 
         }
        else
         {printf("\n El resultado es %f °C",res);
	
         }
	
	system ("pause");
	return 0;
}
