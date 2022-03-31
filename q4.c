#include <stdio.h>

#define SIZE 6

int secret_function(char word[SIZE]);

void demonstrate(void);

void test_pointer(void);
void test_bigger(void);

int main(void) {
    demonstrate();

    // test_pointer();

    // test_bigger();

    return 0;
}

int secret_function(char word[SIZE]) {
    int i = 0;
    int result = 0;

    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}

void demonstrate(void) {
    char word1[SIZE] = "Danny";
    char word2[SIZE] = "POWER";
    char word3[SIZE] = "tenet";

    printf("word: '%s' | result = %d\n", word1, secret_function(word1));
    printf("word: '%s' | result = %d\n", word2, secret_function(word2));
    printf("word: '%s' | result = %d\n", word3, secret_function(word3));
}

void test_pointer(void) {
    char big_string[SIZE * SIZE] = "the FISHING";
    char *pointer = big_string;

    printf("%p : big_string\n", big_string);
    printf("%p : address of big_string[0]\n", &big_string[0]);
    printf("%p : pointer\n", pointer);

    // printf("pointer '%s' | result: %d\n", pointer, secret_function(pointer));
}

void test_bigger(void) {
    char bigger[SIZE + 100] = "Fishing in the river!";
    printf("bigger string '%s' | result: %d\n", bigger, secret_function(bigger));
}

