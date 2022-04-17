/*
 * funciones_aerolineas.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Gian
 */

#ifndef FUNCIONES_AEROLINEAS_H_
#define FUNCIONES_AEROLINEAS_H_
#include <stdio.h>

float IngresarKilometros(char[]);


float PrecioIngresadoVuelos(char mensaje[]);
float descuentoConDebito(float precio);
float InteresesTarjetaDeCredito(float precio);
float PrecioPorKilometros(float precioIngresado,  float kilometros);
float TarjetaDebito(float precio);
float TarjetaCredito(float precio);
float TraspasoAbitcoin(float precio);
float diferenciaPrecio(float precioLatam, float precioAerolineas);
void CalcularCostos(float kilometros,float precioLatam,float precioAerolineas);
void InformarCostos();
void ValoresIngresados();
float precioIngresadoAerolineas();
float precioIngresadoLatam();
void CargaForzada(float,float,float);







#endif /* FUNCIONES_AEROLINEAS_H_ */
