#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	int tableau[4];

	tableau[0] = 10;
	tableau[1] = 23;
	tableau[2] = 505;
	tableau[3] = 8;
	
	printf("%d", tableau[0]);
	
	return(0);
}