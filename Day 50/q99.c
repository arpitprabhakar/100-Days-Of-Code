//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>
int main() {
    char date[11]; // Format: dd/mm/yyyy
    printf("Enter the date in dd/mm/yyyy format: ");
    if (scanf("%10s", date) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Validate the input format
    if (strlen(date) != 10 || date[2] != '/' || date[5] != '/') {
        printf("Invalid date format.\n");
        return 1;
    }

    // Extract day, month, and year
    char day[3], month[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Convert month number to month abbreviation
    const char *month_abbr;
    if (strcmp(month, "01") == 0) month_abbr = "Jan";
    else if (strcmp(month, "02") == 0) month_abbr = "Feb";
    else if (strcmp(month, "03") == 0) month_abbr = "Mar";
    else if (strcmp(month, "04") == 0) month_abbr = "Apr";
    else if (strcmp(month, "05") == 0) month_abbr = "May";
    else if (strcmp(month, "06") == 0) month_abbr = "Jun";
    else if (strcmp(month, "07") == 0) month_abbr = "Jul";
    else if (strcmp(month, "08") == 0) month_abbr = "Aug";
    else if (strcmp(month, "09") == 0) month_abbr = "Sep";
    else if (strcmp(month, "10") == 0) month_abbr = "Oct";
    else if (strcmp(month, "11") == 0) month_abbr = "Nov";
    else if (strcmp(month, "12") == 0) month_abbr = "Dec";
    else {
        printf("Invalid month.\n");
        return 1;
    }

    // Print the reformatted date
    printf("The date in dd-MMM-yyyy format is: %s-%s-%s\n", day, month_abbr, year); 
    return 0;
}