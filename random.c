#include <stdio.h>
#include <stdlib.h>
#include <time.h>

randomChar()
{
        char randomLetter[] = {'A','B','C','D','E','F','G','H','I','J',
                        'K','L','M','N','O','P','Q','R','S','T','U',
                        'V','W','X','Y','Z'};
    int r = rand() % 26;
    return randomLetter[r];
}
