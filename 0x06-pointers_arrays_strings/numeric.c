#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float light_year = 5.878E12;
	float sun_to_jupiter = 483400000;

	printf("The distance from the sun to Jupiter is %lf"
		" of the light year", sun_to_jupiter / light_year);

	printf("\n");

	printf("The distance from the sun to Jupiter in E notation is %E"
		" of the light year", sun_to_jupiter / light_year);

	printf("\n");

	return (0);
}

