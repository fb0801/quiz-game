#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int menu();
int start();
int help();
int all();
int sports();
int math();
int code();

int main()
{
    int option;
    char name[30];
    printf("\t\t\t\tWelcome to who wants to be a millionaire 2018-2019!\n");
    printf("\t\t\t\t________________________________________________");
    printf("\nPlease enter your name\n");
    scanf("%s",&name);
        if (isdigit(name)|| ispunct(name))// checks the name to see if valid
          printf("invalid name")&& main();
        else
            printf("\nok %s please select from the following options:",name);
            menu();
}
int start()
{
    int n;
    printf("Please select the topic you would like to be questioned on:\n");
    printf("\t\t\t>1 All questions\n\t\t\t>2 Sports\n\t\t\t>3 maths\n\t\t\t>4 Coding\n\t\t\t 5 Exit\n");
    scanf("%d",&n);
        if (n== 1)
            all();
        else if (n==2)
            sports();
        else if (n==3)
            math();
        else if (n==4)
            code();
        else return 0;
}
