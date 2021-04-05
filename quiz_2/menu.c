#include <stdio.h>
#include <stdlib.h>
int menu()
{
    int option;
    printf("\n\t\t\t >1 to start the game\n\t\t\t >2 to view help\n\t\t\t >3 to exit the game\n");
    scanf("%d",&option);
    switch(option)
    {
        case 1: start();
            break;
        case 2: help();
            break;
        case 3: return 0;
    }
    return 0;
}
