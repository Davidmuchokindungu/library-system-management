#include <stdio.h>
#include <stdlib.h>
#include <window.h>
int menu();//prototype;
void execute_action(int action);
int main()
{









    int action;
    do {
    printf("Select an action:\n");
    printf("1. Add new patron\n");
    printf("2. View new patrons\n");
    printf("3. View books\n");
    printf("4. Add new book\n");
    printf("Your action (1-4): \n");
    scanf("%d", &action);
    if(action < 1 || action > 4) {
        printf("Invalid action. Try again.\n");


    }
    } while (action < 1 || action > 4);
    return action;

void execute_action(int action) {
    printf("The action is %d, action");
}
