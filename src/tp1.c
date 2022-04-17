/*
 ============================================================================
 Name        : tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones_aerolineas.h"


int main(void) {

	int opcion;
		int kilometros = 0;
		float precioAerolineas;
		float precioLatam;
		int flagKm=0;
		int flagPrecios=0;
		int flagListo=0;
		int flagForzado=0;



setbuf(stdout,NULL);

	do{
		printf("1. Ingresar Kilometros: (km = %d)\n", kilometros );
				printf("2. Ingresar Precio de Vuelos: (Aerolineas = $%.2f, Latam = $%.2f )\n", precioAerolineas, precioLatam);
				printf("3. Calcular todos los costos \n");
				printf("4. Informar Resultados \n");
				printf("5. Carga forzada de datos \n");
				printf("6. Salir \n");

				printf("Ingrese una opcion : ");
				scanf("%d", &opcion);

				switch(opcion){

				case 1:

				kilometros = IngresarKilometros("ingrese kilometros: ");
				flagKm=1;
				break;
				case 2:
				precioLatam=precioIngresadoLatam();
				precioAerolineas=precioIngresadoAerolineas();
				flagPrecios=1;
				break;
				case 3:

				if((flagKm==1 && flagPrecios==1)||flagForzado==1){
					CalcularCostos(kilometros,precioLatam,precioAerolineas);
					flagListo=1;
				}
				else{
					printf("error,falta ingresar datos");
				}
				break;
				case 4:
				if(flagListo==1){

					InformarCostos();

				}
				else{
									printf("error,falta ingresar datos");
								}

				break;
				case 5:
					CargaForzada(100,500,1000);
					kilometros = 100;
						precioAerolineas = 500;
						precioLatam = 1000;

						flagForzado=1;
				break;

				}

	system("pause");
	}while(opcion!=6);



}

