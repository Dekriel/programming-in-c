#include <stdio.h>
#include <stdlib.h>


int add(int a, int b) {
    int sum = a + b;
    return sum; 
}

int multiply(int a, int b) {
    int sum = a * b;
    return sum;
}

float divide(float a, float b) {
    float sum = a / b;
    return sum;
}

int subtract(int a, int b) {
    int sum = a - b;
    return sum;
}

int main() {
    while(1) {
        int choice;
        int a;
        int b;
        printf("\nCalculator thing.\nPlease input the first number: ");
        scanf("%d", &a);
        printf("Please input the second number: ");
        scanf("%d", &b);
        printf("\nselect one of the following options:\n\nMENU\n1. add\n2. subtract\n3. multiply\n4. divide\n5. exit\n\n:");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("%d", add(a, b));
                break;
            case 2:
                printf("%d", subtract(a, b));
                break;
            case 3:
                printf("%d", multiply(a, b));
                break;
            case 4:
                printf("%f", divide(a, b));
                break;

            case 5:
                exit(0);

            default:
                printf("you think im stupid?");
                break;
        }
    }
}
