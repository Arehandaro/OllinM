#include <stdio.h>

int main(void)
{
	int edad1, edad2, edad3, edad4, media;

	printf("Introdusca la edad de la persona 1: ");
	scanf("%d", &edad1);

	printf("Introdusca la edad de la persona 2: ");
	scanf("%d", &edad2);

	printf("Introdusca la edad de la persona 3: ");
	scanf("%d", &edad3);

	printf("Introdusca la edad de la persona 4: ");
	scanf("%d", &edad4);
	
	media = (edad1 + edad2 + edad3 + edad4) / 4;

	printf("La media es; %d ", media);
	


	fflush(stdin);
	getchar();
}
