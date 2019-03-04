/*programa: contador de vocales con punteros
autor: felipe henao
fecha:04/03/2019
*/
#include "stdio.h"
//Funcion principal
int main(){
	char palabra[50];
	char *ppalabra=palabra;
	int a=0,e=0,y=0,o=0,u=0;
	//punteros
	int *pa=&a,*pe=&e,*py=&y,*po=&o,*pu=&u;
	printf("\nIngrese una palabra:\n ");
	gets(ppalabra);
	//ciclo que compara letra por letra para saber cuantas vocales tiene
	for(int i = 0;i<50;i++){
		if (palabra[i]=='a'){a++;}if(palabra[i]=='e'){e++;}if(palabra[i]=='i'){y++;}if(palabra[i]=='o'){o++;}if(palabra[i]=='u'){u++;}
	}
	printf("\nLa palabra %s tiene las siguientes vocales: \nA=%d \nE=%d \nI=%d \nO=%d \nU=%d  ",ppalabra,*pa,*pe,*py,*po,*pu);
}
