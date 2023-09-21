#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char name[10] = "Bismarck";
	char ch = 'c';
	char l;

	printf("%s", name);

	printf("\n");
	
	printf("Type a single letter: \n");
	l = getchar();
	/*l = atoi(l);*/

	printf("%c", l);

	/*ch = getchar();
	printf("%s", ch);
	*/
	putchar(ch);
	printf("%d", ch);
	printf("\n");

	return (0);
}

