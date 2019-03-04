/*programa: suma de dos numeros con punteros
  autor: felipe henao
  fecha:04/03/2019
*/
#include <stdio.h>

//Funcion principal
int main() 
{
	int a,b,s;
	int *p=&a;
	int *q=&b;
	int *r=&s;
	
	fflush(stdin);
	//pide datos para realizar la suma
	printf("Ingrese dos numeros enteros para realizar la suma\n");
	scanf("%d\n",p);
	scanf("%d\n",q);
	//se utiliza punteros para hacer la operación
	*r=*p+*q;
	//se muestra la suma utilizando punteros
	printf("%d + %d = %d\n",*p,*q,*r);
	//muestra la direccion de memoria de cada una de las variables usadas para la suma
	printf("TABLA DE DIRECCION DE MEMORIA\n");
	printf("%d=%p\n %d=%p\n %d=%p",*p,p,*q,q,*r,r);
	
	return 0;
}

