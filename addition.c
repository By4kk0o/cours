#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void addition(int a, int b)
{ 
  
}

int main()
{
	int nb1;
	int nb2;
  printf("Choisissez le premier nombre");
  scanf("%d", &nb1);
  scanf("%d", &nb2);
  printf(&nb1 + &nb2);
  return 0;
}
