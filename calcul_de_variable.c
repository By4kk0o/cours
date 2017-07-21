#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int resultat = 0, nb1 = 0, nb2 = 0;
  
  printf("Entrez le nombre 1 : ");
  scanf("%d", &nb1);
  printf("Entrez le nombre 2 : ");
  scanf("%d", &nb2);
  
  resultat = nb1 + nb2;
  
  printf ("%d + %d = %d\n", nb1, nb2, resultat);
       
  return 0;
}