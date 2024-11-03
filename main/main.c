#include <stdio.h>
#include <unistd.h>     // Sirve para poder utilizar la funcion sleep()


void app_main(void)
{
    printf("Inicio el programa\n");

    int contador = 0;

    while(1){
        printf("Contador:%d \n",contador);
        contador = contador +1 ;
        sleep(1);
    }
}