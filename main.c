#include <stdio.h>

// Regra de negócio: (horas por ano) + (tempo indisponibilidade por hora), dividido horas por ano //

int main() {
    
    int horasPorAno = 8760;
    int tempoIndis;
    int porcentagemDisp;
    float calcIndis;
    float calcFinal;    
    
    printf("Coloque o tempo de indisponibilidade em horas: ");
    scanf("%d", &tempoIndis);
    
    
    calcIndis = horasPorAno - tempoIndis;
    
    fflush(stdin);
    
    calcFinal = (calcIndis / horasPorAno) * 100;
    

    printf("%f", calcFinal);
    
}
