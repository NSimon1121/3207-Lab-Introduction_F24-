#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

/*
Name: Nicholas Simon
Class: Operating Systems
Prject 0: Intro to Git
Date: 09/01/2023
*/

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randomChar() );
	putchar('\n');

	return(0);
}