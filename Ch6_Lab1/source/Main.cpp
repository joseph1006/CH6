#include <stdio.h>
#include <stdlib.h>
#include "../include/Information.h"

void main()
{
	Person P;
	printf("Please input yout name");
	scanf_s("%s", &P.name, 8);
	printf("Please input yout gender (0=woman 1=man)");
	scanf_s("%d", &P.gender);
	printf("Please input yout age");
	scanf_s("%d", &P.age);

	printf("\nHi! %s. ", P.name);
	if (P.gender == 0)
	{
		printf("You are a %d-year-old woman.\n", P.age);
	}
	else
	{
		printf("You are a %d-year-old man.\n", P.age);
	}
	system("PAUSE");
}