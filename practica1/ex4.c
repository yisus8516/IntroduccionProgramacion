#include <stdio.h>
#include <stdlib.h>

int s,hr,mn,st;
int main() 
{
     printf("Este es un programa para calcular la equivalencia de un tiempo en segundos a segundos, oras y minutos. \n \n Inroduzca la cantidad de segundos: \n");
     scanf("%d",&st);
	 mn=(st>60?st/60:1);
	 hr=(mn/60);
	 s=st%60;
	 mn=mn-hr*60;
	 printf("\n las equivalencias son: 	horas: %d minutos: %d segundos: %d",hr,mn,s);
	
	
	system ("pause");
	return 0;
}
