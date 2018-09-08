#include <stdio.h>
#include <stdlib.h>

int main (){
	
	//declaracio de variables 
	int filas=5;
	int columnas=5;
	int sala [filas][columnas];
	int opcion=1;
	int inicio1=0;
	int inicio2=0;
	int asiento=1;
	int posicion=0;
	int contador;
	double precio1=5,precio2=3.50,precio3=2.50;
	double ganancia;
	
	
	
	//llenado de la martiz 
	for(inicio1=0;inicio1<filas;inicio1++){
		for(inicio2=0;inicio2<columnas;inicio2++){
		
		sala[inicio1][inicio2]=asiento;
		asiento=asiento+1;
		}
	}

	
	// menu del programa 
	
	while (opcion==1 || opcion==2 || opcion==3){
	printf ("\n Ingrese una opcion:\n");
	printf ("\n1-Vender entradas.\n");
	printf ("\n2-verificar estado del asiento.\n");
	printf ("\n3-Verificar ganancias totales.\n ");
	printf ("\n4-Salir.\n");
	printf("\n");
	scanf ("%d",&opcion);
	
	switch (opcion){
		case 1:
			//Mostrando sala de cine. asientos disponibles y ocupados.
			for(inicio1=0;inicio1<filas;inicio1++){
				for(inicio2=0;inicio2<columnas;inicio2++){
					printf (" %d  ",sala[inicio1][inicio2]);
					}
				    printf("\n");
			}
			//realizar venta.
			printf ("\nSeleccione un asiento.\n");
			scanf ("%d",&posicion);
			
			for(inicio1=0;inicio1<filas;inicio1++){
				for(inicio2=0;inicio2<columnas;inicio2++){
					if (sala[inicio1][inicio2]==posicion){
						sala[inicio1][inicio2]=0;
						if (posicion>=1 & posicion<=5){
						ganancia=ganancia+precio1;
						}
						if (posicion>=6 & posicion<=20){
						ganancia=ganancia+precio2;
						}
						if (posicion>=21 & posicion<=25){
						ganancia=ganancia+precio3;
						}
						
					}
					//mostrando asientos ocupados. El numero cero representa los asientos ocupados.
					//si selecciona una posicion donde haya cero no se contara como un nuevo asiento ni se vera afectado el incremento de ganancia.
					if (sala[inicio1][inicio2]==0){
						printf ("\nAsiento numero %d ocupado.\n",posicion);
					}
					
					}
				    
			}break;
		
		case 2:
			
			for(inicio1=0;inicio1<filas;inicio1++){
				for(inicio2=0;inicio2<columnas;inicio2++){
				printf (" %d  ",sala[inicio1][inicio2]);
					}
				printf("\n");
			}break;
		
		case 3:
				printf ("\nLas ganancias son: %lf.\n",ganancia);
				break;
			
	}		
	}			
}
