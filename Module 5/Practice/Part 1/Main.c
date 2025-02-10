#include <stdio.h>
#include "Util.h"

int main() {
    char* name;
    int menuItem;

    printf("Enter your name: ");
    scanf("%s", name);
    greet(name);

    printf("MENU\n");
    printf("1 - Hamburger\n");
    printf("2 - Wrap\n");
    printf("3 - Fries\n");
    printf("4 - Drink\n");
    printf("\nEnter your selection: ");
    scanf("%d", &menuItem);
    orderFood(menuItem);
    
    return 0;
}