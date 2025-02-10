#include <stdio.h>
#include "Util.h"

void greet(char* name) {
    printf("Hello, %s!\n", name);
}

void orderFood(int menuItem) {
    if (menuItem == 1) printf("You have ordered a hamburger\n");
    else if (menuItem == 2) printf("You have ordered a wrap\n");
    else if (menuItem == 3) printf("You have ordered some fries\n");
    else if (menuItem == 4) printf("You have ordered a drink\n");
    else printf("Please enter a valid menu option\n");
}