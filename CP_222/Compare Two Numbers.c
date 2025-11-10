#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b)
        printf("%d is greater than %d\n", a, b);
    else if (a < b)
        printf("%d is less than %d\n", a, b);
    else
        printf("Both numbers are equal.\n");

    return 0;
}
