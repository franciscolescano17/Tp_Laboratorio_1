/*
 * Funcion.h
 *
 *  Created on: 16 abr. 2022
 *      Author: fracisco
 */

#ifndef FUNCION_H_
#define FUNCION_H_

/**

 * @brief esta funcion toma un valor y lo muestra.
 *
 * @param Mensaje texto que le va a indicar al usuario el dato .
 * @param Valor dato entero ingresado por el usuario.
 * @return Valor.
 */

///
float recivir_Valor(char*Mensaje,float Valor);
/**

 * @brief esta funcion devuelve el porcentaje que le indiquemos de un numero.
 *
 * @param Valor este es el porcentaje que deseamos.
 * @return devuelve el dato con con descuento.
 */
///
float calcular_Tarjeta_Debito(float Valor);
/**

 * @brief esta funcion calcula el interes que le indiquemos de un numero.
 *
 * @param Valor valor ingresado.
 * @return devuelve el dato con el interes.
 */
///
float calcular_Tarjeta_Credito(float Valor);
/**

 * @brief esta funcion convierte el valor ingresado a moneda bitcoin.
 *
 * @param Valor se divide el monto ingresado por los bitcoin.
 * @return devuelve el dato transfomado a bitcoin.
 */
///
float Conversor_Bitcoin(float Valor);
/**

 * @brief esta funcion recibe el valor del vuelo y lo divide por los km ingresados.
 *
 *
 * @param Valor valor ingresado.
 * @param km cantidad de km.
 * @return devulve el valor de precio por km.
 */
///
float precio_Por_Km(float Valor, float km);
/**

 * @brief esta funcion se encarga de la diferencia entre dos numeros.
 *
 * @param Valor_1 primer dato.
 * @param Valor_2 segundo dato.
 * @return devuelve la diferencia entre Valor_1 y Valor_2.
 */
///
float diferencia_De_Precio(float Valor_1,float Valor_2);



#endif /* FUNCION_H_ */
