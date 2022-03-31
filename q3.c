#include <stdio.h>

#define N 10

void array_string(void);
void null_terminator_display(void);
void shorthand_string(void);
void null_terminator_motivation(void);
void string_undefined(void);
void null_terminator_insert(void);
void null_terminator_space(void);

int main() {
    array_string();

    // null_terminator_display();

    // shorthand_string();

    // null_terminator_motivation();
    
    // string_undefined();

    // null_terminator_insert();

    // null_terminator_space();

    return 0;
}

void array_string(void) {
    char string[N] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", string);
}

void null_terminator_display(void) {
    printf("This is what a NULL terminator looks like: '%c'\n", '\0');
}

void shorthand_string(void) {
    char string[N] = "hello";

    // What's really inside string?
    int i = 0;
    while (i < N) {
        printf("%d: ", i);

        char c = string[i];
        if (c == '\0') {
            printf("NULL terminator");
        } else {
            printf("'%c'", c);
        }

        printf("\n");
        i++;
    }
}

void null_terminator_motivation(void) {
    int numbers[N];
    numbers[0] = 1;
    numbers[1] = 2;
    int i = 0;
    // How will this know that the last index I filed was index 1?
    while (i < N) {
        printf("%d\n", numbers[i]);
        i++;
    }
}

void string_undefined(void) {
    char string[N];
    string[0] = 'h';
    string[1] = 'i';
    string[2] = '\0';

    // string = { h i \0 <undefined> <undefined> ... <undefined }
    
    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}

void null_terminator_insert(void) {
    char string[N] = {'d', 'o', 'g', '\0', 'c', 'a', 't'};
    printf("%s\n", string);
}

void null_terminator_space(void) {
    char string[6] = "hello";
    printf("%s", string);
}

