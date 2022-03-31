#include <stdio.h>

#define MAX_LINE_LENGTH 6

void example(void);
void return_value(void);

int main(void) {
    example();

    // return_value();
    return 0;
}

void example(void) {
    char message[MAX_LINE_LENGTH];

    printf("Enter a message: ");
    fgets(message, MAX_LINE_LENGTH, stdin);

    printf("message now looks like this: '%s'\n", message);
}

void return_value(void) {
    char message[MAX_LINE_LENGTH];
    char *result;

    printf("Enter a message: ");
    result = fgets(message, MAX_LINE_LENGTH, stdin);

    printf("The result was: '%s'\n", result);
}

