#include <stdio.h>

int main(){
    
char usuario[10]; //usuario
char uTest[10]; //para validaci�n de usuario
char caracter1, cTest; //character de la contrase�a
int numero, nTest; //entero de la contrase�a
int op; //para seleccionar opciones
char op2; //para seleccionar opciones
char *ap_caracter=&caracter1;
int *ap_num=&numero;

printf("Ingrese su usuario: ");
scanf("%s",&usuario);
printf("Ingrese su contrasenia (1caracteres y n�mero):");
fflush(stdin);
scanf("%c%d",&caracter1,&numero);
while(op==1||op==2){
   printf("Seleccione:\n");
   printf("1. Ver usuario y contrasenia\n");
   printf("2. Validar usuario y contrasenia\n");
   fflush(stdin);
   scanf("%d",&op);
   if(op==1){
        	//acciones para ver
   }else if(op==2){
       	//acciones para validar
   }
}
printf("Usuario: %s\n",usuario);
printf("Contrase�a: \n");
printf(" entrar�a a la direcci�n %p y %p, est� seguro de   continuar (S/N)) ",ap_caracter,ap_num);
fflush(stdin);scanf("%c",&op2);
if(op2=='S')
   printf("contrasenia... %c%d\n",*ap_caracter,*ap_num);
printf("Ingrese su usuario: ");
scanf("%s",&uTest);
printf("Ingrese su contrasenia (3 caracteres y un n�mero):");
fflush(stdin);
scanf("%c%d",&cTest,&nTest);
if(strcmp(uTest,usuario)==0){
    printf("CORRECTO!!\n");
}else{
    printf("INCORRECTO!!\n");
}
getch();
}
