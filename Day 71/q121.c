#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int age;
    // Try to read name and age in simple format: either "Name: Rahul, Age: 23" or "Rahul 23"
    if (!fgets(name, sizeof(name), stdin)) return 0;
    // parse
    char nm[200] = "";
    if (sscanf(name, "Name: %199[^,], Age: %d", nm, &age) == 2) {
        // parsed
    } else if (sscanf(name, "%199s %d", nm, &age) == 2) {
        // parsed
    } else {
        return 0;
    }
    FILE *f = fopen("info.txt", "w");
    if (!f) return 0;
    fprintf(f, "Name: %s Age: %d", nm, age);
    fclose(f);
    printf("File created successfully! Data written to info.txt");
    return 0;
}

