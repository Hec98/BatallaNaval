#include <stdio.h>
#include<stdbool.h>
//Declarar funciones
void colocarbarcosJ1();
void colocarbarcosJ2();
void ataqueJugador1();
void ataqueJugador2();
void evaluarJuego(int matrizJ1[10][10], int matrizJ2[10][10]);
void imprimirMatriz(int matriz[10][10]);
// Declarar variables
int barcosJ1[10][10]= {{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }};
int barcosJ2[10][10]= {{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					   { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }};
bool ganoJ1, ganoJ2, confirmar;
int x,y,xR,yR;
int main(int argc, char *argv[]) {
// Lamar funciones
	printf("\n");
	printf(" ######                                                      #     #                                 \n");
	printf(" #     #    ##    #####    ##    #       #         ##        ##    #    ##    #    #    ##    #      \n");
	printf(" #     #   #  #     #     #  #   #       #        #  #       # #   #   #  #   #    #   #  #   #      \n");
	printf(" ######   #    #    #    #    #  #       #       #    #      #  #  #  #    #  #    #  #    #  #      \n");
	printf(" #     #  ######    #    ######  #       #       ######      #   # #  ######  #    #  ######  #      \n");
	printf(" #     #  #    #    #    #    #  #       #       #    #      #    ##  #    #   #  #   #    #  #      \n");
	printf(" ######   #    #    #    #    #  ######  ######  #    #      #     #  #    #    ##    #    #  ###### \n");
	printf("\n");
	printf("\n          __                                            ");
	printf("\n         (  )                                           ");
    printf("\n        (    )                                          ");
    printf("\n         (__)                                           ");
    printf("\n        _|__|_______                                    ");
    printf("\n       |____________|                                   ");
    printf("\n       |  O   O   O |                        _____      ");
    printf("\n   ____|____________|_______________________|_____|___  ");
    printf("\n   %c_________________________________________________/  ",92);
    printf("\n    %c   o    o    o    o    o    o    o    o    o   /   ",92);
    printf("\n     %c_____________________________________________/    \n",92);
	printf("\n");
	printf("Jugador 1\n");
	imprimirMatriz(barcosJ1);
	printf("Jugador 2\n");
	imprimirMatriz(barcosJ2);
	colocarbarcosJ1();
	colocarbarcosJ2();
	confirmar=true;
	while(confirmar) {
		if(confirmar)ataqueJugador1();
		if(confirmar)ataqueJugador2();
	}
	return 0;
}
// Funciones
void colocarbarcosJ1() {
	printf("\n");
	printf("       #                                                        #   \n");
	printf("       #  #    #   ####     ##    #####    ####   #####        ##   \n");
	printf("       #  #    #  #    #   #  #   #    #  #    #  #    #      # #   \n");
	printf("       #  #    #  #       #    #  #    #  #    #  #    #        #   \n");
	printf(" #     #  #    #  #  ###  ######  #    #  #    #  #####         #   \n");
	printf(" #     #  #    #  #    #  #    #  #    #  #    #  #   #         #   \n");
	printf("  #####    ####    ####   #    #  #####    ####   #    #      ##### \n");
	printf("\n");
	printf("Coloca tus barcos Jugador 1\n");
	printf("Coloca las coordenadas de tu Portaavion (x,y)\n");
	scanf("%i", &x); xR = x - 1;
	scanf("%i", &y); yR = y -1;
	confirmar = true;
	while (confirmar) {
		if(barcosJ1[xR][yR]==0 && xR <=10 && yR <=10) {
			barcosJ1[xR][yR] = 1;
			confirmar = false;
		}else {
			printf("Coordenadas no disponibles, ingresa nuevos valores (x,y)\n");
			scanf("%i", &x); xR = x - 1;
			scanf("%i", &y); yR = y -1;
		}
	}
	printf("Coloca las coordenadas de tu Submarino (x,y)\n");
	scanf("%i", &x); xR = x - 1;
	scanf("%i", &y); yR = y -1;
	confirmar = true;
	while (confirmar) {
		if(barcosJ1[xR][yR]==0 && xR <=10 && yR <=10) {
			barcosJ1[xR][yR] = 1;
			confirmar = false;
		}else {
			printf("Coordenadas no disponibles, ingresa nuevos valores (x,y)\n");
			scanf("%i", &x); xR = x - 1;
			scanf("%i", &y); yR = y -1;
		}
	}
	printf("Coloca las coordenadas de tu Destructor (x,y)\n");
	scanf("%i", &x); xR = x - 1;
	scanf("%i", &y); yR = y -1;
	confirmar = true;
	while (confirmar) {
		if(barcosJ1[xR][yR]==0 && xR <=10 && yR <=10) {
			barcosJ1[xR][yR] = 1;
			confirmar = false;
		}else {
			printf("Coordenadas no disponibles, ingresa nuevos valores (x,y)\n");
			scanf("%i", &x); xR = x - 1;
			scanf("%i", &y); yR = y -1;
		}
	}
	printf("Coloca las coordenadas de tu Fragata (x,y)\n");
	scanf("%i", &x); xR = x - 1;
	scanf("%i", &y); yR = y -1;
	confirmar = true;
	while (confirmar) {
		if(barcosJ1[xR][yR]==0 && xR <=10 && yR <=10) {
			barcosJ1[xR][yR] = 1;
			confirmar = false;
		}else {
			printf("Coordenadas no disponibles, ingresa nuevos valores (x,y)\n");
			scanf("%i", &x); xR = x - 1;
			scanf("%i", &y); yR = y -1;
		}
	}
	printf("Tus barcos Jugador 1\n");
	imprimirMatriz(barcosJ1);
}
void colocarbarcosJ2() {
	printf("\n");
	printf("       #                                                       #####  \n");
	printf("       #  #    #   ####     ##    #####    ####   #####       #     # \n");
	printf("       #  #    #  #    #   #  #   #    #  #    #  #    #            # \n");
	printf("       #  #    #  #       #    #  #    #  #    #  #    #       #####  \n");
	printf(" #     #  #    #  #  ###  ######  #    #  #    #  #####       #       \n");
	printf(" #     #  #    #  #    #  #    #  #    #  #    #  #   #       #       \n");
	printf("  #####    ####    ####   #    #  #####    ####   #    #      ####### \n");
	printf("\n");
	printf("Coloca tus barcos Jugador 2\n");
	printf("Coloca las coordenadas de tu Portaavion (x,y)\n");
	scanf("%i", &x); xR = x - 1;
	scanf("%i", &y); yR = y -1;
	confirmar = true;
	while (confirmar) {
		if(barcosJ2[xR][yR]==0 && xR <=10 && yR <=10) {
			barcosJ2[xR][yR] = 2;
			confirmar = false;
		}else {
			printf("Coordenadas no disponibles, ingresa nuevos valores (x,y)\n");
			scanf("%i", &x); xR = x - 1;
			scanf("%i", &y); yR = y -1;
		}
	}
	printf("Coloca las coordenadas de tu Submarino (x,y)\n");
	scanf("%i", &x); xR = x - 1;
	scanf("%i", &y); yR = y -1;
	confirmar = true;
	while (confirmar) {
		if(barcosJ2[xR][yR]==0 && xR <=10 && yR <=10) {
			barcosJ2[xR][yR] = 2;
			confirmar = false;
		}else {
			printf("Coordenadas no disponibles, ingresa nuevos valores (x,y)\n");
			scanf("%i", &x); xR = x - 1;
			scanf("%i", &y); yR = y -1;
		}
	}
	printf("Coloca las coordenadas de tu Destructor (x,y)\n");
	scanf("%i", &x); xR = x - 1;
	scanf("%i", &y); yR = y -1;
	confirmar = true;
	while (confirmar) {
		if(barcosJ2[xR][yR]==0 && xR <=10 && yR <=10) {
			barcosJ2[xR][yR] = 2;
			confirmar = false;
		}else {
			printf("Coordenadas no disponibles, ingresa nuevos valores (x,y)\n");
			scanf("%i", &x); xR = x - 1;
			scanf("%i", &y); yR = y -1;
		}
	}
	printf("Coloca las coordenadas de tu Fragata (x,y)\n");
	scanf("%i", &x); xR = x - 1;
	scanf("%i", &y); yR = y -1;
	confirmar = true;
	while (confirmar) {
		if(barcosJ2[xR][yR]==0 && xR <=10 && yR <=10) {
			barcosJ2[xR][yR] = 2;
			confirmar = false;
		}else {
			printf("Coordenadas no disponibles, ingresa nuevos valores (x,y)\n");
			scanf("%i", &x); xR = x - 1;
			scanf("%i", &y); yR = y -1;
		}
	}
	printf("Tus barcos Jugador 2\n");
	imprimirMatriz(barcosJ2);
}
void ataqueJugador1() {
	printf("\nJugador 1 Elige las coordenadas a disparar al jugador 2 (x,y)\n");	
	scanf("%i", &x); xR = x - 1;
	scanf("%i", &y); yR = y -1;
	if(barcosJ2[xR][yR]==0) {
		printf("Fallaste\n");
		printf("\n");
		printf("  #     ## \n");
	 	printf(" ###   #   \n");
		printf("  #   #    \n");
		printf("      #    \n");
		printf("  #   #    \n");
		printf(" ###   #   \n");
		printf("  #     ## \n");
		printf("\n");
	} else {
		printf("Acertaste!\n");
		printf("\n");
		printf("\n                    __ ___ ___ ____                    ");
        printf("\n                  /  (         ) ) )                   ");
        printf("\n                 (   (    ) __      )                  ");
        printf("\n                (     __        )    )                 ");
        printf("\n               (  (         )     )   )                ");
        printf("\n                 (           _      )                  ");
        printf("\n                    (  ____    _   )                   ");
        printf("\n                         |   |                         ");
        printf("\n                        |     |                        ");
        printf("\n                       |       |                       ");
        printf("\n  ____________________|_________|______________________");
        printf("\n");
		barcosJ2[xR][yR] = 0;
		evaluarJuego(barcosJ1,barcosJ2);
	}
}
void ataqueJugador2() {
	printf("\nJugador 2 Elige las coordenadas a disparar al jugador 1 (x,y)\n");	
	scanf("%i", &x); xR = x - 1;
	scanf("%i", &y); yR = y -1;
	if(barcosJ1[xR][yR]==0) {
		printf("Fallaste\n");
		printf("\n");
		printf("  #     ## \n");
		printf(" ###   #   \n");
		printf("  #   #    \n");
		printf("      #    \n");
		printf("  #   #    \n");
		printf(" ###   #   \n");
		printf("  #     ## \n");
		printf("\n");
	} else {
		printf("Acertaste!\n");
		printf("\n");
		printf("\n                    __ ___ ___ ____                    ");
        printf("\n                  /  (         ) ) )                   ");
        printf("\n                 (   (    ) __      )                  ");
        printf("\n                (     __        )    )                 ");
        printf("\n               (  (         )     )   )                ");
        printf("\n                 (           _      )                  ");
        printf("\n                    (  ____    _   )                   ");
        printf("\n                         |   |                         ");
        printf("\n                        |     |                        ");
        printf("\n                       |       |                       ");
        printf("\n  ____________________|_________|______________________");
        printf("\n");
		barcosJ1[xR][yR] = 0;
		evaluarJuego(barcosJ1,barcosJ2);
	}
}
void evaluarJuego(int matrizJ1[10][10], int matrizJ2[10][10]) {
	ganoJ1=true;
	ganoJ2=true;
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) {
			
			if(matrizJ1[i][j]!=0) {
				ganoJ2 = false;
			}
			if(matrizJ2[i][j]!=0) {
				ganoJ1 = false;
			}
		}
	}
	if(ganoJ1 == true) {
		printf("\n");
		printf(" #     #                                               ###  ###  ### \n");
		printf(" #     #  #   ####   #####   ####   #####   #    ##    ###  ###  ### \n");
		printf(" #     #  #  #    #    #    #    #  #    #  #   #  #   ###  ###  ### \n");
		printf(" #     #  #  #         #    #    #  #    #  #  #    #   #    #    #  \n");
		printf("  #   #   #  #         #    #    #  #####   #  ######                \n");
		printf("   # #    #  #    #    #    #    #  #   #   #  #    #  ###  ###  ### \n");
		printf("    #     #   ####     #     ####   #    #  #  #    #  ###  ###  ### \n");
		printf("\n");
		printf("\nGano Jugador 1 el Jugador 2 se quedo sin barcos\n");
		printf("\nJugador 1\n");
		imprimirMatriz(barcosJ1);
		printf("Jugador 2\n");
		imprimirMatriz(barcosJ2);
		confirmar=false;
	}
	if(ganoJ2 == true) {
		printf("\n");
		printf(" #     #                                               ###  ###  ### \n");
		printf(" #     #  #   ####   #####   ####   #####   #    ##    ###  ###  ### \n");
		printf(" #     #  #  #    #    #    #    #  #    #  #   #  #   ###  ###  ### \n");
		printf(" #     #  #  #         #    #    #  #    #  #  #    #   #    #    #  \n");
		printf("  #   #   #  #         #    #    #  #####   #  ######                \n");
		printf("   # #    #  #    #    #    #    #  #   #   #  #    #  ###  ###  ### \n");
		printf("    #     #   ####     #     ####   #    #  #  #    #  ###  ###  ### \n");
		printf("\n");
		printf("\nGano Jugador 2 el Jugador 1 se quedo sin barcos\n");
		printf("\nJugador 1\n");
		imprimirMatriz(barcosJ1);
		printf("Jugador 2\n");
		imprimirMatriz(barcosJ2);
		confirmar=false;
	}
}
void imprimirMatriz(int matriz[10][10]) {
	for(int i=0; i<10; i++) {
		for(int j=0; j<10; j++) printf("%i ", matriz[i][j]); 
		printf("\n");
	}
}