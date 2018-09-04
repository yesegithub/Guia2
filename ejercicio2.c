#include <stdio.h>


//declaracion de variable.

int main(){
int filas=0;
int columnas=0;
int inicio1=0;
int inicio2=0;
int numero1=0;
int inicio3=0;
int numero2=0;
int suma=0;

// declaraxcion de matriz 

printf("Ingrese las filas");
scanf("%d",&filas);
printf("Ingrese las columnas");
scanf("%d",&columnas);

int matriz1 [filas][columnas];
int matriz2 [filas][columnas];
int resultante [filas][columnas];

// llenado de las matrices

for(inicio1=0;inicio1<filas;inicio1++){
	for(inicio2=0;inicio2<columnas;inicio2++){
		printf("Ingrese los valores de la segunda matriz");
		scanf("%d",&numero1);
   
		matriz1[inicio1][inicio2]=numero1;
		
		
	}
}

for(inicio1=0;inicio1<filas;inicio1++){
	for(inicio2=0;inicio2<columnas;inicio2++){
		printf("Ingrese los valores de la segunda matriz");
		scanf("%d",&numero2);
   
		matriz2[inicio1][inicio2]=numero2;
		
		
	}
}
for (inicio3=0;inicio3<filas;inicio3++){
for(inicio2=0;inicio2<columnas;inicio2++){
	for(inicio1=0;inicio1<filas;inicio1++){
		suma= matriz1[inicio3][inicio1]*matriz2[inicio1][inicio2];
		
		
		
	}
	resultante[inicio3][inicio2]=suma;
	suma=0;
	}
}






return 0;
}
