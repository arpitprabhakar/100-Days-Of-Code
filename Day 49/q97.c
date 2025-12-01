//Print the initials of a name.

#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    printf("Enter the full name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("Invalid input.\n");
        return 1;
    }

    // Remove trailing newline character if present
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    char initials[10] = "";
    char *token = strtok(name, " ");

    while (token != NULL) {
        char initial[3];
        initial[0] = token[0];
        initial[1] = '.';
        initial[2] = '\0';
        strcat(initials, initial);
        token = strtok(NULL, " ");
    }

    printf("The initials are: %s\n", initials);
    return 0;
}