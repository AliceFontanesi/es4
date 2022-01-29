# include  <stdio.h>
#include <math.h>
int  main ( int argc, char *argv[])
{
    float a, b, rapp, rad;
    do
    {
        printf("Inserisci il primo valore\n");
        scanf("%f", &a);
        printf("Inserisci il secondo valore\n");
        scanf("%f", &b);
        if (a < b)
            rapp = b/a;
        else
            rapp = a/b;
    } while (rapp > 0);
    return 0;
}
