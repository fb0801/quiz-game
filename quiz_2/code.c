#include <stdio.h>
#include <stdlib.h>
int p1(), p2();
int code()
{
    printf("\t\t\tWelcome to code you have will have 2 practice questions then the game will begin, goodluck");
    p1();
    return 0;
}
int p1()
{
    char op;
    printf("Practice 1: In C which of these is not a data type that you can use?\n A:Integer\t\t\t B:Float\n C:String\t\t\t D:Double\n");
    scanf("%s",&op);
        if (op =='c' || op =='C')
            printf("Correct!\n") && p2();
        else
            printf("Wrong the answer was c\n") && p2();
}
int p2()
{
    printf("u");
}
