#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int* pointeurHeures, int* pointeurMinutes)
{
    *pointeurHeures = *pointeurMinutes / 60;
    *pointeurMinutes = *pointeurMinutes % 60; 
}

int main(int argc, char *argv[])
{
    int heures = 0, minutes = 90;

    decoupeMinutes(&heures, &minutes);

    printf("%d heures et %d minutes", heures, minutes);

    return 0;
}