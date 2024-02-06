#include <stdio.h>

int main() {
    char ans;

    do {
        int count; // number of values they need to use
        printf("Enter the number of values: ");
        scanf("%d", &count);

        if (count < 2) {
            printf("Error: At least you need to enter two values\n");
        } else {
            char op;
            double num1;

            
                printf("Enter the first number: ");
                scanf("%lf", &num1);

                double currentvalue, result = num1;

                // until finished entering numbers
                for (int i = 2; i <= count; i++) {
                    do {
                        printf("Enter the operator (+, -, *, /): ");
                        getchar();
                        scanf("%c", &op);

                        // checking if the operator is valid or not
                        if (op != '+' && op != '-' && op != '*' && op != '/') {
                            printf("Invalid operator. Please enter a valid operator.\n");
                        }
                    } while (op != '+' && op != '-' && op != '*' && op != '/');

                    printf("Enter number %d: ", i);
                    scanf("%lf", &currentvalue);

                    switch (op) {
                        case '+':
                            result += currentvalue;
                            break;
                        case '-':
                            result -= currentvalue;
                            break;
                        case '*':
                            result *= currentvalue;
                            break;
                        case '/':
                            if (currentvalue == 0.0) {
                                printf("Divide by zero\n");
                            } else {
                                result /= currentvalue;
                            }
                            break;
                    }
                }

                printf("Result: %lf\n", result);

                printf("Do you want to perform another calculation? Enter 'y' for yes, any other key to finish: ");
                getchar(); 
                scanf(" %c", &ans);

            
        }

    } while (ans == 'y');

    return 0;
}

