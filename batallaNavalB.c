#include <stdio.h>
#include<stdbool.h>
//Declarar funciones
void colocarbarcosJ1();
void colocarbarcosJ2();
void ataqueJugador1();
void ataqueJugador2();
void evaluarJuego(int matrizJ1[5][5], int matrizJ2[5][5]);
void imprimirMatriz(int matriz[5][5]);
// Declarar variables
int barcosJ1[5][5]= {{ 0, 0, 0, 0, 0 },
		     { 0, 0, 0, 0, 0 },
		     { 0, 0, 0, 0, 0 },
		     { 0, 0, 0, 0, 0 },
		     { 0, 0, 0, 0, 0 }};
int barcosJ2[5][5]= {{ 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 }};
bool ganoJ1, ganoJ2, ataque;
int x,y,xR,yR;
int main(int argc, char *argv[]) {
// Lamar funciones
	printf("Jugador 1\n");
	imprimirMatriz(barcosJ1);
	printf("Jugador 2\n");
	imprimirMatriz(barcosJ2);
	colocarbarcosJ1();
	colocarbarcosJ2();
	ataque=true;
	while(ataque) {
		if(ataque)ataqueJugador1();
		if(ataque)ataqueJugador2();
	}
	return 0;
}
// Funciones
void colocarbarcosJ1() {
	printf("Coloca tus barcos Jugador 1\n");
	printf("Coloca las cordenadas de tu Portaavion (x,y)\n");
	scanf("%i", &x); 
	scanf("%i", &y); 
	barcosJ1[x-1][y-1] = 1;
	printf("Coloca las cordenadas de tu Submarino (x,y)\n");
	scanf("%i", &x); 
	scanf("%i", &y); 
	barcosJ1[x-1][y-1] = 1;
	printf("Coloca las cordenadas de tu Destructor (x,y)\n");
	scanf("%i", &x); 
	scanf("%i", &y); 
	barcosJ1[x-1][y-1] = 1;
	printf("Coloca las cordenadas de tu Fragata (x,y)\n");
	scanf("%i", &x); 
	scanf("%i", &y); 
	barcosJ1[x-1][y-1] = 1;
	printf("Tus barcos Jugador 1\n");
	imprimirMatriz(barcosJ1);
}
void colocarbarcosJ2() {
	printf("Coloca tus barcos Jugador 2\n");
	printf("Coloca las cordenadas de tu Portaavion (x,y)\n");
	scanf("%i", &x); 
	scanf("%i", &y); 
	barcosJ2[x-1][y-1] = 2;
	printf("Coloca las cordenadas de tu Submarino (x,y)\n");
	scanf("%i", &x); 
	scanf("%i", &y);
	barcosJ2[x-1][y-1] = 2;
	printf("Coloca las cordenadas de tu Destructor (x,y)\n");
	scanf("%i", &x); 
	scanf("%i", &y); 
	barcosJ2[x-1][y-1] = 2;
	printf("Coloca las cordenadas de tu Fragata (x,y)\n");
	scanf("%i", &x); 
	scanf("%i", &y); 
	barcosJ2[x-1][y-1] = 2;
	printf("Tus barcos Jugador 2\n");
	imprimirMatriz(barcosJ2);
}
void ataqueJugador1() {
	printf("\nJugador 1 Elige las cordenadas a disparar al jugador 2 (x,y)\n");	
	scanf("%i", &x); xR = x - 1;
	scanf("%i", &y); yR = y -1;
	if(barcosJ2[xR][yR]==0) printf("Fallaste");
	else {
		printf("Acertaste!\n");
		barcosJ2[xR][yR] = 0;
		evaluarJuego(barcosJ1,barcosJ2);
	}
}
void ataqueJugador2() {
	printf("\nJugador 2 Elige las cordenadas a disparar al jugador 1 (x,y)\n");	
	scanf("%i", &x); xR = x - 1;
	scanf("%i", &y); yR = y -1;
	if(barcosJ1[xR][yR]==0) printf("Fallaste");
	else {
		printf("Acertaste!");
		barcosJ1[xR][yR] = 0;
		evaluarJuego(barcosJ1,barcosJ2);
	}
}
void evaluarJuego(int matrizJ1[5][5], int matrizJ2[5][5]) {
	ganoJ1=true;
	ganoJ2=true;
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			
			if(matrizJ1[i][j]!=0) {
				ganoJ2 = false;
			}
			if(matrizJ2[i][j]!=0) {
				ganoJ1 = false;
			}
		}
	}
	if(ganoJ1 == true) {
		printf("\nGano Jugador 1 el Jugador 2 se quedo sin barcos\n");
		printf("Jugador 1\n");
		imprimirMatriz(barcosJ1);
		printf("Jugador 2\n");
		imprimirMatriz(barcosJ2);
		ataque=false;
	}
	if(ganoJ2 == true) {
		printf("\nGano Jugador 2 el Jugador 1 se quedo sin barcos\n");
		printf("Jugador 1\n");
		imprimirMatriz(barcosJ1);
		printf("Jugador 2\n");
		imprimirMatriz(barcosJ2);
		ataque=false;
	}
}
void imprimirMatriz(int matriz[5][5]) {
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) printf("%i ", matriz[i][j]); 
		printf("\n");
	}
}
