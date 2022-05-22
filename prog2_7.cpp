/* 
Autor: Franciscomilan
Realizado: 31/03/22
Escuela: Universidad UVM
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 7 del parcial 2 en C que utiliza la libreria string 
para usar cadenas de caracteres y sus funciones mas comunes para la
materia programacion estructurada
*/

//Libreiras
#include<stdio.h>
#include<string.h>
//Principal
int main() {
	//Declaracion de variables
	char nombre[]="Franciscomilan";
	char *carrera="Ing. en Sistemas Comp";
	char nombre2[30];
	int longitud;
	//Ingresar datos
	printf(" \nIntroduce el nombre: ");
	//scanf("%s",&nombre2);
	//fgets-lee todo y valida 
	fgets(nombre2,30,stdin);  
	//Salida
	printf("\nNombre2 =[%s]\n", nombre2);
	printf(" Nombre: [%s]\n", nombre);
	printf(" Carrera: [%s]\n", carrera);
	//Proceso
	longitud=strlen(nombre2);
	printf(" La longitud de nombre2 es %d\n", longitud);
	if (strlen(nombre)>strlen(nombre2)) {
		printf(" Nombre tiene mas caracteres \n");
	} else {
		printf(" Nombre2 tiene mas caracteres \n");
	}
	//Retorno
	return 0;
}

