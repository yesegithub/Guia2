#include <stdio.h>
#include <stdlib.h>

int main (){
	int dimencion,inicio,opcion=1,posicion;	
	printf ("\n la dimencion del vector.\n");
	scanf ("%d",&dimencion);
	int vector [dimencion];
	int numero;
	int eliminado;
	//llenando vector 
	for (inicio=0;inicio<dimencion;inicio++){
		printf ("\n Ingrese los valores del vector\n");
		scanf ("%d",&numero);
		vector[inicio]=numero;
	}
	// opcion de borrado.
	printf ("\n Ingrese la posicion que desea eliminar\n");
		scanf ("%d",&posicion);
		printf("\n");
		if (posicion>dimencion){
			printf("La posicion no existe");
			}
		else {
			eliminado=vector[posicion];
			for (inicio=0;inicio<dimencion;inicio++){
				if (inicio==posicion){
					while (inicio<dimencion){
						vector[inicio]=vector[inicio+1];
						inicio++;
					}break;
				}
				
			}
		dimencion=dimencion-1;
		for(inicio=0;inicio<dimencion;inicio++){
			printf("  %d ",vector[inicio]);
			printf("\n");
		}	
		printf("\n");
		printf("el valor eliminado es %d",eliminado);
			
		}
			
		}
	



