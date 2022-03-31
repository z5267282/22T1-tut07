#include <stdio.h>

#define MAX_STRING_LENGTH 4096

int main(void) {

    char message[MAX_STRING_LENGTH];
    while (fgets(message, MAX_STRING_LENGTH, stdin) != NULL) {
        printf("%s", message);
        printf("%s", message);
    }
        
    return 0;
}

