#include <stdio.h>

struct Expense
{
    char category[20];
    float amount;
};

void addExpense(struct Expense e[], int *count)
{
    printf("Enter Category: ");
    scanf("%s", e[*count].category);

    printf("Enter Amount: ");
    scanf("%f", &e[*count].amount);

    (*count)++;
}

void displayExpenses(struct Expense e[], int count)
{
    int i;
    float total = 0;

    printf("\n--- Expense List ---\n");

    for(i = 0; i < count; i++)
    {
        printf("%d. %s - Rs %.2f\n",
               i + 1,
               e[i].category,
               e[i].amount);

        total += e[i].amount;
    }

    printf("Total Expense = Rs %.2f\n", total);
}

int main()
{
    struct Expense expenses[100];
    int count = 0;
    int choice;

    do
    {
        printf("\nExpense Tracker");
        printf("\n1. Add Expense");
        printf("\n2. View Expenses");
        printf("\n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addExpense(expenses, &count);
                break;

            case 2:
                displayExpenses(expenses, count);
                break;

            case 3:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}