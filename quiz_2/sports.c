#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int s1(),s2();
int g1(), ex1();
int g2();
int g3();
int g4();
int exq();
int sports()
{
    char choice;
    puts("\t\t\t\t\tWelcome to sports\nThe first two are practice questions\n");
    printf("Q1: In what year was Chelsea fc founded?\nA: 1905\t\t\tB:1888\nC: 2001\t\t\tD:1957\n");
    scanf("%s",&choice);
        if (choice =='A' || choice =='a')
            printf("Correct!\n") && s1();
        else printf("Wrong it was A!\n")&& s1();
}
int s1()
{
    char choice;
    printf("In basketball which of these is not a position?\nA:Forward\t\t\tB:Goalkeeper\nC:playmaker\t\t\tD:point guard\n");
    scanf("%s",&choice);
        if (choice == 'B' || choice == 'b' || choice == 'C'|| choice =='c')
            printf("Correct, that was a trick question\n") && s2();
        else printf("Wrong, correct answer is B or C\n") && s2();
}
int s2()
{
    char choice;
    puts("You've completed the practice questions now the fun really begins you have only 1 life good luck!\n");
    printf("In Rugby scoring a point is called what?\nA:Goal\t\t\tB:point\nc:whole\t\t\tD:try\n");
    scanf("%s",&choice);
        if (choice == 'D' || 'd')
            printf("Correct!\n") && g1();
        else printf("Wrong it was D\n")&& menu();
}
int g1()
{
    char op;
    puts("Q1: How long are football games in total?\nA:90min\t\tB:50min\nC:200min\tD:30min\n");
        scanf("%s",&op);
        if (op == 'A' || op == 'a')
            printf("Correct!\n") && g2();
        else printf("Wrong, better luck next time\n") && menu();
}
int g2()
{
    char op;
    printf("Q2: Which team in the Barclays Premier League does not have any trophies\n");
    puts("A:Crystal Palace\tB:Fulham\nC:spurs\tD:Real Madrid\n");
    scanf("%s",&op);
        if (op == 'c' || op == 'C')
            printf("Correct!\n") && g3(); //move on to next question
        else printf("Wrong the answer was c, better luck next time!\n") && menu(); //returns to menu to choose game option after losing
}
int g3()
{
    char op;
    printf("In cricket a century is how many runs?\nA:30\t\t\tB:60\nC:100\t\tD:200\n");
        scanf("%s",&op);
        if (op == 'c'|| op =='C')
            printf("Correct!\n") && g4();
        else printf("Wrong, the answer was c!\n") && menu();
}
int g4()
{
    char op;
    puts("In boxing how many rounds do you have?\nA:15\t\t\tB:5\nC:12\t\tD:20\n");
    scanf("%s",&op);
        if (op == 'c' || 'C')
            printf("Correct!\n") && exq();
        else printf("wrong the answer is c\n") && menu();
}
int exq()
{
    char option;
    printf("Do you want to have a extra question and earn more than 1million or save your money?\nEnter Y for Yes or N for No?\n");
    scanf("%s",&option);
        if (option=='Y' || option == 'y')
            printf("Here is your extra question good luck!\n")&& ex1();
        else printf("Thank you for playing Who wants to be a millionaire 2018-19!!!\n") && menu();
}
int ex1()
{
    char op;
    puts("What is a deuce in table tennis\n");
    puts("A:When the game ends in a draw");
    puts("\t\tB:When both players meet match point and continue to rally\n");//correct answer
    puts("C:When a player earns no point and the other does");
    puts("\t\tD:When you place your hand on the table\n");
        scanf("%s",&op);
        if (op =='B' || op == 'b')
            printf("Correct, Congratulation you are today millionaire\n") && menu();
        else printf("Wrong you will be leaving with nothing, thank for playing!\n") && menu();
}
