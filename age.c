#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 0;
  
  printf("Quel age avez-vous ? ");
  scanf("%d", &age); // On demande d'entrer l'�ge avec scanf
  printf("Ah ! Vous avez donc %d ans !\n", age);
       
  return 0;
}