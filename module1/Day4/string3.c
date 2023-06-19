#include <stdio.h>

int main()
{
    char timeStr[9];
    int hours, minutes, seconds, totalSeconds;

    printf("Enter the time in hh:mm:ss format: ");
    scanf("%8s", timeStr);

    sscanf(timeStr, "%d:%d:%d", &hours, &minutes, &seconds);

    totalSeconds = hours * 3600 + minutes * 60 + seconds;

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}
