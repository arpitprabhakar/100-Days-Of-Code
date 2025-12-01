//Print initials of a name with the surname displayed in full.

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
    char surname[50] = "";
    char *token = strtok(name, " ");
    int count = 0;

    while (token != NULL) {
        count++;
        if (strtok(NULL, " ") == NULL) { // Check if this is the last token
            strcpy(surname, token);
            break;
        } else {
            char initial[3];
            initial[0] = token[0];
            initial[1] = '.';
            initial[2] = '\0';
            strcat(initials, initial);
        }
        token = strtok(NULL, " ");
    }

    printf("The initials with surname are: %s %s\n", initials, surname);
    return 0;
}