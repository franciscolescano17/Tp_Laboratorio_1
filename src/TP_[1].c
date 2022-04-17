/*
 ============================================================================
 Name        : tp1.c
 Author      : francisco lescano.
 Version     :2
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Funcion.h"



int main(void) {

	setbuf(stdout, NULL);

	int opcion_Del_Menu;
	float km=0;
	float precio_Arg=0;
	float precio_Latam=0;
	int iteracion=2;
	float tarjeta_De_Debito_ARG;
	float tarjeta_De_Debito_LATAM;
	float tarjeta_De_Credito_ARG;
	float tarjeta_De_Credito_LATAM;
	float valor_Bitcon_ARG;
	float valor_Bitcon_LATAM;
	float precio_Por_Km_ARG;
	float precio_Por_Km_LATAM;
	float diferencia;
	int flag=0;





	do {
		system("cls");
		printf("1) Ingresar Km (km:%.2f)\n",km);
		printf("2) Ingresar Precio de Vuelos(precio Aerolineas ARG:%.2f)(precios Aerolineas Latam:%.2f)\n",precio_Arg,precio_Latam);
		printf("3) Calcular todos los costos\n");
		printf("4) Informar Resultados\n");
		printf("5) Carga forzada de datos\n");
		printf("6) Salir\n");

		scanf("%d",&opcion_Del_Menu);

		switch(opcion_Del_Menu) {
		case 1:

			km=recivir_Valor("Ingrese los km :",km);

			flag=0;
			break;
		case 2:
			if(km>0 ){
				precio_Arg=recivir_Valor("Ingrese el precio de la aerolinea ARG $",precio_Arg);
				precio_Latam=recivir_Valor("Ingrese el precio de la aerolinea LATAM $",precio_Latam);
				flag=0;
			}
			else{
				printf("Primero deve ingresar los Km\n");
				system("pause");
			}
			break;

		case 3:if(precio_Arg>0 && precio_Latam>0)
		{
			tarjeta_De_Debito_ARG=calcular_Tarjeta_Debito(precio_Arg);
			tarjeta_De_Credito_ARG=calcular_Tarjeta_Credito(precio_Arg);
			valor_Bitcon_ARG=Conversor_Bitcoin(precio_Arg);
			precio_Por_Km_ARG=precio_Por_Km(precio_Arg,km);


			diferencia=diferencia_De_Precio(precio_Arg,precio_Latam);


			tarjeta_De_Debito_LATAM=calcular_Tarjeta_Debito(precio_Latam);
			tarjeta_De_Credito_LATAM=calcular_Tarjeta_Credito(precio_Latam);
			valor_Bitcon_LATAM=Conversor_Bitcoin(precio_Latam);
			precio_Por_Km_LATAM=precio_Por_Km(precio_Latam,km);

			flag=1;
			printf("Calculos realizados");
		}
		else {
			printf("Primero debe ingresar los precios\n");

		}
		system("pause");
		break;

		case 4:
			if(precio_Arg>0 && precio_Latam>0 && flag ==1)
			{
				printf("kilometros ingresados:%.2f\n\n", km);

				printf("Aerolineas LATAM:%.2f ",precio_Latam );
				printf("\nPrecio con tarjeta de débito:%.2f",tarjeta_De_Debito_LATAM);
				printf("\nPrecio con tarjeta de crédito:%.2f ",tarjeta_De_Credito_LATAM);
				printf("\nPrecio pagando con bitcoin :%f ",valor_Bitcon_LATAM);
				printf("\nPrecio unitario:%.2f\n\n\n",precio_Por_Km_LATAM);


				printf("\nAerolineas ARG: %.2f",precio_Arg );
				printf("\nPrecio con tarjeta de débito:%.2f",tarjeta_De_Debito_ARG);
				printf("\nPrecio con tarjeta de crédito:%.2f ",tarjeta_De_Credito_ARG);
				printf("\nPrecio pagando con bitcoin :%f ",valor_Bitcon_ARG);
				printf("\nPrecio unitario:%.2f ",precio_Por_Km_ARG);




				printf("\nLa diferencia de precio es:%.2f \n",diferencia);
				system("pause");
			}
			else {
				printf("Primero debe calcular los precios\n");
				system("pause");

			}
			break;


		case 5:
			km=7090;
			precio_Arg=162965;
			precio_Latam=159339;

			tarjeta_De_Debito_ARG=calcular_Tarjeta_Debito(precio_Arg);
			tarjeta_De_Credito_ARG=calcular_Tarjeta_Credito(precio_Arg);
			valor_Bitcon_ARG=Conversor_Bitcoin(precio_Arg);
			precio_Por_Km_ARG=precio_Por_Km(precio_Arg,km);


			diferencia=diferencia_De_Precio(precio_Arg,precio_Latam);


			tarjeta_De_Debito_LATAM=calcular_Tarjeta_Debito(precio_Latam);
			tarjeta_De_Credito_LATAM=calcular_Tarjeta_Credito(precio_Latam);
			valor_Bitcon_LATAM=Conversor_Bitcoin(precio_Latam);
			precio_Por_Km_LATAM=precio_Por_Km(precio_Latam,km);

			printf("kilometros ingresados :%.2f\n\n", km);

			printf("Precio  LATAM:%.2f ",precio_Latam );
			printf("\nPrecio con tarjeta de débito:%.2f ",tarjeta_De_Debito_LATAM);
			printf("\nPrecio con tarjeta de crédito:%.2f ",tarjeta_De_Credito_LATAM);
			printf("\nPrecio pagando con bitcoin:%f ",valor_Bitcon_LATAM);
			printf("\nPrecio unitario:%.2f\n\n\n",precio_Por_Km_LATAM);


			printf("\nPrecio ARG : %.2f ",precio_Arg );
			printf("\nPrecio con tarjeta de débito :%.2f ",tarjeta_De_Debito_ARG);
			printf("\nPrecio con tarjeta de crédito :%.2f ",tarjeta_De_Credito_ARG);
			printf("\nPrecio pagando con bitcoin :%f ",valor_Bitcon_ARG);
			printf("\nPrecio unitario :%.2f ",precio_Por_Km_ARG);




			printf("\nLa diferencia de precio es:%.2f \n",diferencia);
			system("pause");

			break;

		case 6:
			iteracion=6;
			break;
		}

	}while(iteracion != 6);
	return 0;
}


