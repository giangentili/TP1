/*
 * funciones_aerolineas.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Gian
 */

#include "funciones_aerolineas.h"
			float kilometros;
			float precioAerolineas;
			float precioLatam;
			float interesAerolineas;
			float descuentoAerolineas;
			float interesAerolineas;
            float interesLatam;
			float descuentoLatam;
			float pasoBitcoinAerolineas;
			float pasoBitcoinLatam;
			float precioPorKilometrosLatam;
			float precioPorKilometrosAerolineas;
			float diferenciaDePrecio;

float IngresarKilometros(char mensaje[]){

	printf("%s", mensaje);
	scanf("%f", &kilometros);

	return kilometros;
}








float descuentoConDebito(float precio){

	float precioConDebito;
	float descuento;

	descuento = (precio * 10) / 100;


	precioConDebito = precio - descuento;

	return precioConDebito;
}

float InteresesTarjetaDeCredito(float precio){

	float precioTarjetaCredito;
	float interesAgregado;

	interesAgregado = (precio * 25) / 100;

	precioTarjetaCredito = precio + interesAgregado;

	return precioTarjetaCredito;
}

float PrecioPorKilometros(float precioIngresado,float kilometros){


	float resultado;

	resultado = precioIngresado/kilometros;

   return resultado;

}

float TarjetaDebito(float precio)
{
	int descuentoDebito = 10;
	float resultado;
	float resultadoFinal;

	resultado = (precio*descuentoDebito)/100;
	resultadoFinal = precio-resultado;

	return resultadoFinal;

}

float TarjetaCredito(float precio){

	int interes=25;
	float resultado;
	float resultadoFinal;

	resultado = (precio*interes)/100;
	resultadoFinal = precio+resultado;

	return resultadoFinal;

}

float TraspasoAbitcoin(float precio){

	float valorBitcoin=4606954.55;
	float resultado;

	resultado = precio/valorBitcoin;

	return resultado;


}

float diferenciaPrecio(float precioLatam, float precioAerolineas){

	float diferencia;

	diferencia= precioLatam-precioAerolineas;

	if(diferencia<0){
		diferencia = diferencia*-1;
	}

	return diferencia;
}

void CalcularCostos(float kilometros,float precioLatam,float precioAerolineas)
{



	interesLatam=TarjetaCredito(precioLatam);
					descuentoLatam=TarjetaDebito(precioLatam);
					pasoBitcoinLatam= TraspasoAbitcoin(precioLatam);
					precioPorKilometrosLatam = PrecioPorKilometros(precioLatam,kilometros);

					descuentoAerolineas= TarjetaDebito(precioAerolineas);
					interesAerolineas= TarjetaCredito(precioAerolineas);
					pasoBitcoinAerolineas= TraspasoAbitcoin(precioAerolineas);
					precioPorKilometrosAerolineas = PrecioPorKilometros(precioAerolineas,kilometros);
					diferenciaDePrecio=diferenciaPrecio(precioLatam,precioAerolineas);

					printf("\ncalculos finalizados\n");
}



void InformarCostos()
{
printf("\nKMs Ingresados:  %.2f km", kilometros);
                printf("\n\nPrecio Aerolineas: $ %.2f",precioAerolineas);
                printf("\na)Precio con tarjeta de debito: $ %.2f",descuentoAerolineas);
                printf("\nb)Precio con tarjeta de credito: $ %.2f",interesAerolineas);
                printf("\nc)Precio pagando con BITCOIN: $ %f",pasoBitcoinAerolineas);
                printf("\nd)Mostrar precio unitario: $ %.2f",precioPorKilometrosAerolineas);

                printf("\n\nPrecio LATAM: $ %.2f",precioLatam);
                printf("\na)Precio con tarjeta de debito: $ %.2f",descuentoLatam);
                printf("\nb)Precio con tarjeta de credito: $ %.2f",interesLatam);
                printf("\nc)Precio pagando con BITCOIN: $ %f",pasoBitcoinLatam);
                printf("\nd)Mostrar precio unitario: $ %.2f",precioPorKilometrosLatam);
                printf("\n\nLa diferencia de precio es: $ %.2f\n",diferenciaDePrecio);
}

float precioIngresadoAerolineas()
{

		printf("\ningrese precio aerolineas: ");
		scanf("%f", &precioAerolineas);


		return precioAerolineas;

}

float precioIngresadoLatam()
{

		printf("\ningrese precio latam: ");
		scanf("%f", &precioLatam);


		return precioLatam;

}

 void CargaForzada(float kilometrosForzados,float precioLatamForzado,float precioAerolineasForzado){
	 kilometros = kilometrosForzados;
	 precioLatam = precioLatamForzado;
	precioAerolineas = precioAerolineasForzado;

 }
