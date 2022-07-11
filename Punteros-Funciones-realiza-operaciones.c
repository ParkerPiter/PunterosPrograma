//Universidad Santa Maria
//Caracas, 8 de julio del 2022
//Elaborado por Gabriel Leal

//Elaborar un programa en lenguaje c que realice las operaciones basicas como lo son suma, resta, division y producto
//por medio de llamadas a funciones ue forman parte de una matriz, aplicando punteros
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Variables globales
int validar_numero(char numero[]);//Validación
int n, numerovalido;

main(){
	char numero[5], opc[5], opc2[5];
	int num_suma, num_resta, num_divi, num_rest;		
	
	do{
		//Menu
		menu:
		printf("\t Menu\n");
		printf("\n");
		printf("1. Sumar 2 numeros enteros\n");
		printf("2. Restar 2 numeros enteros\n");
		printf("3. Dividir 2 numeros enteros\n");
		printf("4. Ver el resto de la division de 2 numeros enteros\n");
		printf("5. Salir\n");
		printf("Ingrese una opcion del menu: ");
		scanf("%s", opc);
		n=validar_numero(opc);
		system("cls");
		
		numerovalido=atoi(opc);//Llamada al metodo para la validación
		
		switch(numerovalido){
			
			case 1: 
					suma(&num_suma);
					printf("El resultado de la suma es: %d \n", num_suma);					
					system("pause");
					system("cls");
					break;
					
			case 2: 
					resta(&num_resta);
					printf("El resultado de la suma es: %d \n", num_resta);
					system("pause");
					system("cls");
					break;
			
			case 3: 
					division(&num_divi);
					printf("El resultado de la suma es: %d \n", num_divi);
					system("pause");
					system("cls");
					break;
					
			case 4: 
					resto(&num_rest);
					printf("El resultado de la suma es: %d \n", num_rest);
					system("pause");
					system("cls");
					break;
					
			case 5: salida:
					printf("Saliendo del programa...\n");
					system("pause");
					goto end;
					
			default: printf("Opcion fuera de rango, ingrese una opcion valida \n");
					 system("pause");
					 system("cls");
					 goto menu;
		}
		
	}while(opc2==1);
	
	//Opcion para volver al menu o salirse 
	menu2:
	printf("\tQuiere volver a menu? \n");
	printf("1. Si \n");
	printf("2. No \n");
	printf("Ingrese una de las opciones: ");
	scanf("%s", opc2);
	n=validar_numero(opc2);
	system("cls");
	
	numerovalido=atoi(opc2);//Llamada al metodo para la validación
	
	if(numerovalido > 2 || numerovalido < 1){
		printf("Opcion invalida, ingrese una opcion de las mostradas en pantalla, vuelvalo a intentar\n");
		system("pause");
		system("cls");
		goto menu2;
	}
	if(numerovalido == 1){
		numerovalido = 0;
		goto menu;
	}
	if(numerovalido == 2){
		goto salida;
	}
	end:
	return 0 ;
}

//validacion de numeros ingresados
int validar_numero(char numero[]){ 

	int i; //variable local para ciclo for
	for(i=0; i<strlen(numero); i++){
		if(!(isdigit(numero[i]))){ //condicional de si la variable ingresada es diferente de un numero entero como i, enviar mensaje de error
			system("cls");
			printf("\tIngresa un solo numeros \n");
			system("pause");
			system("cls");
			return 0;
		}
	}
	return 1;
}

void suma(int *una_suma){
	//Variables a sumar
	int num1, num2, resp = *una_suma;
	char n1[5], n2[5]; 
	suma:
	printf("Ingrese un numero entero a sumar: ");
	scanf("%s", n1);
	n=validar_numero(n1);
	numerovalido=atoi(n1);//Llamada al metodo para la validación
	if(numerovalido == 0){
		printf("El numero ingresado no es valido, por favor ingrese un numero mayor a 0 \n");
		system("pause");
		system("cls");
		goto suma;
	}
	num1 = numerovalido;
	
	suma2:
	printf("Ingrese un otro numero entero a sumar: ");
	scanf("%s", n2);
	n=validar_numero(n2);
	numerovalido=atoi(n2);//Llamada al metodo para la validación
	if(numerovalido == 0){
		printf("El numero ingresado no es valido, por favor ingrese un numero mayor a 0 \n");
		system("pause");
		system("cls");
		goto suma2;
	}
	num2 = numerovalido;
	
	
	//Lo manda a la dirección asignada y saca la operación
	resp = num1 + num2;
	*una_suma = resp;
	
}

void resta(int *una_resta){
	//Variables a restar
	int num1, num2, resp= *una_resta;
	char n1[5], n2[5];
	resta:
	printf("Ingrese un numero entero a restar: ");
	scanf("%s", n1);
	n=validar_numero(n1);
	numerovalido=atoi(n1);//Llamada al metodo para la validación
	if(numerovalido == 0){
		printf("El numero ingresado no es valido, por favor ingrese un numero mayor a 0 \n");
		system("pause");
		system("cls");
		goto resta;
	}
	num1 = numerovalido;
	
	resta2:
	printf("Ingrese un otro numero entero a restar: ");
	scanf("%s", n2);
	n=validar_numero(n2);
	numerovalido=atoi(n2);//Llamada al metodo para la validación
	if(numerovalido == 0){
		printf("El numero ingresado no es valido, por favor ingrese un numero mayor a 0 \n");
		system("pause");
		system("cls");
		goto resta2;
	}
	num2 = numerovalido;
	
	//Lo manda a la dirección asignada y saca la operación
	resp = num1 - num2;
	*una_resta = resp;
	
}

void division(int *una_division){
	//Variables a divir
	int num1, num2, resp = *una_division;
	char n1[5], n2[5];
	division:
	printf("Ingrese un numero entero a dividir: ");
	scanf("%s", n1);
	n=validar_numero(n1);
	numerovalido=atoi(n1);//Llamada al metodo para la validación
	if(numerovalido == 0){
		printf("El numero ingresado no es valido, por favor ingrese un numero mayor a 0 \n");
		system("pause");
		system("cls");
		goto division;
	}
	num1 = numerovalido;
	
	division2:
	printf("Ingrese un otro numero entero a dividir: ");
	scanf("%s", n2);
	n=validar_numero(n2);
	numerovalido=atoi(n2);//Llamada al metodo para la validación
	if(numerovalido == 0){
		printf("El numero ingresado no es valido, por favor ingrese un numero mayor a 0 \n");
		system("pause");
		system("cls");
		goto division2;
	}
	num2 = numerovalido;
	
	//Lo manda a la dirección asignada y saca la operación
	resp = num1 / num2;
	*una_division = resp;
	
}

void resto(int *un_rest){
	//Variables a sacar el resto
	int num1, num2, resp = *un_rest;
	char n1[5], n2[5];
	modulo:
	printf("Ingrese un numero entero para sacar su resto: ");
	scanf("%s", n1);
	n=validar_numero(n1);
	numerovalido=atoi(n1);//Llamada al metodo para la validación
	if(numerovalido == 0){
		printf("El numero ingresado no es valido, por favor ingrese un numero mayor a 0 \n");
		system("pause");
		system("cls");
		goto modulo;
	}
	num1 = numerovalido;
	
	modulo2:
	printf("Ingrese un otro numero entero para sacar su resto: ");
	scanf("%s", n2);
	n=validar_numero(n2);
	numerovalido=atoi(n2);//Llamada al metodo para la validación
	if(numerovalido == 0){
		printf("El numero ingresado no es valido, por favor ingrese un numero mayor a 0 \n");
		system("pause");
		system("cls");
		goto modulo2;
	}
	num2 = numerovalido;

	//Lo manda a la dirección asignada y saca la operación
	resp = num1 % num2;
	*un_rest = resp;
	
}
