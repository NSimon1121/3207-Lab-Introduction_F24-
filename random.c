#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"
char randomChar();
char randomChar()
{
    return 'A' + (rand() % 26);
}
