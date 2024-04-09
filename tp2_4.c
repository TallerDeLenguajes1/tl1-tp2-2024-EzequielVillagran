#include <stdio.h>
#include <stdlib.h>
#define TAMA 50

char tipos[6][10] ={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};


struct PC
{
    float velocidad;
    int anio;
    int cantNucleos;
    char *tipo_cpu;
}typedef pc; 

pc cargarDatos();
void mostrarListas( pc e[TAMA]);

int main(){

srand(time(NULL));

pc nueva[TAMA];

for (int i = 0; i < 5; i++)
{
    nueva[i].velocidad = 1 + rand()%3;
    nueva[i].anio = 2015 + rand()%9;
    nueva[i].cantNucleos = 1 + rand()%9;
    for (int j = 0; j < 10; j++)
    {
        nueva[i].tipo_cpu = tipos[i][j]; 
    }
    
}


mostrarListas(nueva);
    return 0;
}

pc cargarDatos(){

    pc aux;

    aux.velocidad = 1 + rand()%3;
    aux.anio = 2015 + rand()%9;
    aux.cantNucleos = 1 + rand()%9;
    
    return aux;
}

void mostrarListas( pc e[TAMA]){
printf("LISTAS:\n");

for (int i = 0; i < 5; i++)
{

    printf("Velocidad de procesamiento en GHaz: %.2f\n", e[i].velocidad);
    printf("Anio: %d\n", e[i].anio);
    printf("Cantidad: %d \n", e[i].cantNucleos);

    for (int j = 0; j < 10; j++)
    {
        printf("Tipo de procesador: \n");
        puts(e[i].tipo_cpu);
    }
    
    

}


}