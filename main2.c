#include <stdio.h>

int main (int argc, char *argv[]) {

    float mnums[3][6];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("mnums[%d][%d]: ",i,j);
            scanf("%f",&mnums[i][j]);
        }
    }
    

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%.2f\t",mnums[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}