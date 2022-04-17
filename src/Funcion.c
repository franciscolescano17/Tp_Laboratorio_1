/*
 * Funcion.c
 *
 *  Created on: 16 abr. 2022
 *      Author: fracisco
 */
#include  "Funcion.h"

float recivir_Valor(char*Mensaje,float Valor)
{
	printf(Mensaje );
	scanf("%f",&Valor);

	return Valor ;
}

float calcular_Tarjeta_Debito(float Valor)
{
	return  Valor-((Valor*10)/100);
}

float calcular_Tarjeta_Credito(float Valor) {
	return Valor + ((Valor * 25) / 100);
}

float Conversor_Bitcoin(float Valor)
{
	return Valor/4606954.55;
}

float precio_Por_Km(float Valor, float km)
{
	return Valor/km;

}

float diferencia_De_Precio(float Valor_1,float Valor_2)
{
	if(Valor_1 >=Valor_2)
	{
		return Valor_1-Valor_2;
	}
	else {
		return Valor_2-Valor_1;
	}
}
