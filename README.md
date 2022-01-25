# Juego de batalla naval

![Screenshot-at-2022-01-25-16-00-24.png](https://i.postimg.cc/mkjpBshG/Screenshot-at-2022-01-25-16-00-24.png)

### Cada jugador tiene asignada una matiz previamente rellenada con ceros

- En las funciones **colocarbarcosJ1()** y **colocarbarcosJ2()** rellenan la coordenada indicada con un "1", en cada valor "1" de la matiz representará un barco

- Con las funciones **ataqueJugador1()** y **ataqueJugador2()** pide las cordenadas para atacar al contrario, evalúa en las coordenadas ingresadas si se encuentra un "1" y lo remplazara por un 0, en caso de encontrar un "0" en la coordenada indicara al jugador que fallo

- La función **evaluarJuego()** se llama cada vez que un jugador acierta un ataque y evalúa cuando una matriz tiene solo "0", es decir gano el jugador contrario que cuenta con barcos representados con "1". 

- En la función **evaluarJuego()** se cuenta con las variables **ganoJ1** y **ganoJ2** ambas con el valor **true**, en el ciclo for se recorre las 2 motrices y si se encuentran valores diferentes a 0 se cambiara su valor a **false**, cuando una matiz tiene solo 0 se conservara el valor **true** e indicara al ganador del juego.

- Están disponibles 2 versiones del juego con las mismas funciones cambien los tamaños de las matrices y una cuenta con representaciones echas con figuras mediante ascii.

### Despliegue

- Es posible compilar y ejecutar el proyecto como en el ide zinjai, codebloks entre otros

- Compilar y ejecutar en linux usando gcc

```
gcc batallaNavalA.c -o batallaNavalA && ./batallaNavalA
```

```
gcc batallaNavalB.c -o batallaNavalB && ./batallaNavalB
```

[![logoN1-w.png](https://i.postimg.cc/bvwkKP8Y/logoN1-w.png)](https://github.com/Hec98)
