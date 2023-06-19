#include <stdio.h>

int isLeapYear(int year)
{
    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1; // Leap year
    else
        return 0; // Not a leap year
}

int main()
{
    char dateStr[11];
    int day, month, year, i;
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysElapsed = 0;

    printf("Enter the date in DD/MM/YYYY format: ");
    scanf("%10s", dateStr);

    // Extract day, month, and year from the date string
    sscanf(dateStr, "%d/%d/%d", &day, &month, &year);


    // Calculate the number of days elapsed in the current year
    for (i = 1; i < month; i++)
    {
        // Handle February in a leap year
        if (i == 2 && isLeapYear(year))
            daysElapsed += 29; // February in a leap year has 29 days
        else
            daysElapsed += daysInMonth[i]; // Add the number of days in the month
    }

    // Add the remaining days in the current month
    daysElapsed += day;

    printf("Number of days elapsed: %d\n", daysElapsed);

    return 0;
}
