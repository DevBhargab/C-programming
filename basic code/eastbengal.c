
#include <stdio.h>

int main() {
    printf("Calculator\n");

    int i = 0;
    while (i <= 5) {
        int a, b, c, d, e, f, g, h;

        // Addition
        printf("Enter the value of a: ");
        scanf("%d", &a);
        printf("Enter the value of b: ");
        scanf("%d", &b);
        int sum = a + b;
        printf("Your sum is: %d\n", sum);

        // Subtraction
        printf("Enter the value of c: ");
        scanf("%d", &c);
        printf("Enter the value of d: ");
        scanf("%d", &d);
        int difference = c - d;
        printf("Your subtraction result is: %d\n", difference);

        // Multiplication
        printf("Enter the value of e: ");
        scanf("%d", &e);
        printf("Enter the value of f: ");
        scanf("%d", &f);
        int product = e * f;
        printf("Your multiplication result is: %d\n", product);

        // Division
        printf("Enter the value of g: ");
        scanf("%d", &g);
        printf("Enter the value of h: ");
        scanf("%d", &h);
        if (h != 0) {
            int quotient = g / h;
            printf("Your division result is: %d\n", quotient);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }

        i++; // Increment to eventually end the loop
    }

    return 0;
}

