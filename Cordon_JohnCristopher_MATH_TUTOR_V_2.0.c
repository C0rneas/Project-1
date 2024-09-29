#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>
int a, option, max, num1, num2, result, answer, score = 0;

void Addition();
void Subtraction();
void Multiplication();
void Division();
void Results();

int main()
{
    do{
        system("cls");
        printf("Math Tutor V2.0");
        printf("\n\n----MENU----");
        printf("\n\nPress 1. Addition");
        printf("\nPress 2. Subtraction");
        printf("\nPress 3. Multiplication");
        printf("\nPress 4. Division");
        printf("\nPress 5. Results");
        printf("\nPress 6. Exit");
        printf("\n\nEnter your option: ");
        scanf("%i", &option);
        switch(option)
        {
            case 1: Addition(); break;
            case 2: Subtraction(); break;
            case 3: Multiplication(); break;
            case 4: Division(); break;
            case 5: Results(); break;
            case 6: exit(0); break;
            default: printf("Invalid option. Please try again (1 - 6).");
        }
    }while(option != 6);
}

void Addition()
{
    system("cls");
    printf("Please input a number that corresponds to how many addition problem/s you want: ");
    scanf("%i", &max);
    for(a = 1; a<= max; a++)
    {
        num1 = rand()%100;
        num2 = rand()%100;
        result = num1 + num2;
        printf("%i + %i = ?: ", num1, num2);
        scanf("%i",&answer);
        if(result == answer)
        {
            printf("Correct!\n");
            score = score + 1;
        }
        else
            printf("Wrong! the correct answer is %i\n", result);
    }
    getch();
}

void Subtraction()
{
    system("cls");
    printf("Please input a number that corresponds to how many subtraction problem/s you want: ");
    scanf("%i", &max);
    for(a = 1; a<= max; a++)
    {
        num1 = rand()%100;
        num2 = rand()%100;
        if(num1 <= num2)
        {
            result = num2 - num1;
        }
        else
        {
            result = num1 - num2;
        }
        printf("%i - %i = ?: ", num1, num2);
        scanf("%i",&answer);
        if(result == answer)
        {
            printf("Correct!\n");
            score = score + 1;
        }
        else
            printf("Wrong! the correct answer is %i\n", result);
    }
     getch();
}

void Multiplication()
{
    system("cls");
    printf("Please input a number that corresponds to how many multiplication problems/s that you want: ");
    scanf("%i", &max);
    for(a = 1; a<= max; a++)
    {
        num1 = rand()%100;
        num2 = rand()%100;
        result = num1 * num2;
        printf("%i x %i = ?: ", num1, num2);
        scanf("%i",&answer);
        if(result == answer)
        {
            printf("Correct!\n");
            score = score + 1;
        }
        else
            printf("Wrong! the correct answer is %i\n", result);
    }
     getch();
}

void Division()
{
    system("cls");
    printf("Please input a number that corresponds to how many division problem/s you want: ");
    scanf("%i", &max);
    for(a = 1; a<= max; a++)
    {
        num1 = rand()%100;
        num2 = rand()%10;
        result = num1 / num2;
        printf("%i / %i = ?: ", num1, num2);
        scanf("%i",&answer);
        if(result == answer)
        {
            printf("Correct!\n");
            score = score + 1;
        }
        else
            printf("Wrong! the correct answer is %i\n", result);
    }
     getch();
}

void Results()
{
    printf("\nYour score is %i/%i", score, max);
    printf("\nPress enter to continue");
    score = 0;
    getch();
}
