#include <stdio.h>


float MediaSono(float domingo, float segunda, float terca, float quarta, float quinta, float sexta, float sabado) {
    return (domingo + segunda + terca + quarta + quinta + sexta + sabado) / 7.0;
}


void AlertaSono(float domingo, float segunda, float terca, float quarta, float quinta, float sexta, float sabado, float media) {
    
    int alerta = 0;
    if(domingo < media){
        printf("Domingo\n");
        alerta = 1;
    }
    if(segunda < media){
        printf("Segunda\n");
        alerta = 1;
    }
    if(terca < media){
        printf("Terca\n");
        alerta = 1;
    }
    if(quarta < media){
        printf("Quarta\n");
        alerta = 1;
    }
    if(quinta < media){
        printf("Quinta\n");
        alerta = 1;
    }
    if(sexta < media){
        printf("Sexta\n");
        alerta = 1;
    }
    if(sabado < media){
        printf("Sabado\n");
        alerta = 1;
    }
}

int main() {
    
    float domingo, segunda, terca, quarta, quinta, sexta, sabado;

    
    scanf("%f %f %f %f %f %f %f", &domingo, &segunda, &terca, &quarta, &quinta, &sexta, &sabado);

   
    float media = MediaSono(domingo, segunda, terca, quarta, quinta, sexta, sabado);

   
    printf("Media semanal de sono: %.2f horas\n", media);

    
    if(media < 8.0){
        printf("A media esta fora do esperado de pelo menos 8 horas!\n");
        printf("Atencao! Judite dormiu abaixo da media semanal nos dias:\n");
        AlertaSono(domingo, segunda, terca, quarta, quinta, sexta, sabado, media);
    } else {
        printf("A media esta dentro do esperado de pelo menos 8 horas!\n");
    }

    return 0;
}
