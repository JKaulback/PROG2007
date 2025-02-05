#include <stdio.h>
#include "utils.h"

int main() {

    int sum = addNums(10,20);
    printf("sum: %d\n", sum);

    int num;
    scanf("%d", &num);
    if (isEven(num)) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}