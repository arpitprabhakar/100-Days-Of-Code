//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>
int isRotation(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Check if lengths are equal
    if (len1 != len2) {
        return 0; // Not rotation
    }

    // Create a new string by concatenating str1 with itself
    char concatenated[200]; // Assuming max length of str1 is 100
    strcpy(concatenated, str1);
    strcat(concatenated, str1);

    // Check if str2 is a substring of the concatenated string
    if (strstr(concatenated, str2) != NULL) {
        return 1; // Is rotation
    } else {
        return 0; // Not rotation
    }
}
int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    if (scanf("%99s", str1) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Enter the second string: ");
    if (scanf("%99s", str2) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isRotation(str1, str2)) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}