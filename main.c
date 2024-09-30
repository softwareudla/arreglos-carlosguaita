#include <stdio.h>

int main (int argc, char *argv[]) {

    char nombres[5][20];
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre %d: ",i);
        fflush(stdin);
        fgets(nombres[i],20,stdin);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s",nombres[i]);
    }
    
    
    return 0;
}