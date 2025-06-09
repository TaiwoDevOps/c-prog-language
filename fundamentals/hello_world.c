#include <time.h>
#include <stdio.h>
#include <string.h>

// skeletal structure of a c program
// learnt about types such as :
/* int, chars and floats */
// leant about formating and receiving user input
/* %s, string, %d int and %f float/double */
// learned about conditional statements and loops
int main()
{
    time_t timer;
    time(&timer);
    struct tm *local_time = localtime(&timer);
    int year = local_time->tm_year + 1900;

    char name[20];
    int yearBorn, age;
    float amount, walletBalance = 5000.8520;

    int counter;
    int x;
    x = 0;

    while (x == 0)
    {
        printf("Do you wish to enter program ? Press (1) or any other number to exit\n ");
        scanf("%d", &x);
        if (x == 1)
        {

            printf("Hello there👋🏾\n");
            printf("What is your name ? \n");

            scanf("%s", name);

            printf("Hello %s. Pleasure meeting you!\n", name);
            printf("Mind telling me what year you were born?\n");

            scanf("%d", &yearBorn);

            if (yearBorn >= year)
            {
                printf("You can't be born in the future 🙄\n");
                printf("Mind telling me what year you were born again ?\n");
                scanf("%d", &yearBorn);
                age = year - yearBorn;
            }
            else
            {
                age = year - yearBorn;
            }

            printf("Hey %s, looks like you are %d years old 🥳.\n", name, age);
            printf("You can make your first deposit now. Your current balance is %.2f\nEnter amount: \n", walletBalance);

            scanf("%f", &amount);
            char option[3];

            if (amount > walletBalance)
            {
                printf("You dont have enough money!\n");
                printf("Your current balance is %.2f💲\n", walletBalance);
                printf("Do you want to retry within balance (Yes/No) ?\n");
                scanf("%s", option);

                int yesResult = strcmp(option, "yes") || strcmp(option, "Yes") || strcmp(option, "y") || strcmp(option, "Y") || strcmp(option, "YES");
                int noResult = strcmp(option, "no") || strcmp(option, "No") || strcmp(option, "n") || strcmp(option, "N") || strcmp(option, "NO");
                printf("yesResult: %d\nnoResult: %d\n", yesResult, noResult);
                if (noResult == 0)
                {
                    printf("You can credit account and try again. Have a nice day✌️\n");
                    return 0;
                }
                else if (yesResult == 0)
                {
                    printf("Please make deposit within your current balance.\n");
                    scanf("%f", &amount);
                    walletBalance -= amount;
                }
                else
                {
                    return 0;
                }
            }
            else
            {

                walletBalance -= amount;
            }

            printf("Your wallet balance is now: %.2f💲\n", walletBalance);
            counter = 10;
            printf("This program will shutdown in %d seconds\n", counter);
            while (counter > 0)
            {
                counter--;
                if (counter == 0)
                {
                    printf("BOOM 🧨 🧨 🧨 \n");
                    return 0;
                }
                printf(":- %d seconds\n", counter);
            }

            printf("Thank you for your patronage.\nHave a nice day!\n");

            return 0;
        }
    }

    return 0;
}