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

char randomChar();
// This function returns a random letter from A to Z
char randomChar()
{
    return 'A' + (rand() % 26);
}
