#include <stdio.h>
#include <stdlib.h>
int q2();
int q3();
int all()
{
    char choice;
    printf("Practice 1 all questions\nWhen is Christmas?\nA:December\nB: March\nC: April\nD: November\n");
    scanf("%s" , &choice);

   if (choice == 'A' || choice == 'a')
        printf("Correct!\n")&& q2();
    else printf("Wrong!\n") && q2();
  /* switch(choice)
    {
        case 'A': printf("correct!\n");
        break;
        case 'B':
        case 'C':
        case 'D': printf("Wrong!\n");
        break;
    }*/
}
int q2()
{
    char choice;
    printf("Practice 2: Who won the 2018 FIFA World Cup?\nA: France\nB: Germany\nC: England\nD: Brazil");
    scanf("%s", &choice);
        if (choice=='A' || choice =='a')
            printf("Correct!\n") && q3();
        else
            printf("Wrong correct answer is A!\n") && q3();
}
int q3()
{
    char choice;
    printf("The questions will now get more complicated if you fail you will have to start from the beginning, Good luck!\n");
    printf("");
}
