#include <stdio.h>

static int counter = 1;

char* generateID()
{
    static char id[10];
    sprintf(id,"SID%03d",counter++);
    return id;
}