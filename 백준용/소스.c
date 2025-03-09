#include <stdio.h>

int main() {
    int hour, min, minplus, mins = 0;
    scanf("%d %d", &hour, &min);
    scanf("%d", &minplus);

    min += minplus;
    if (min >= 60) {
        mins = min / 60;
        hour += mins;
        min -= 60 * mins;
        if (hour >= 24) {
            hour -= 24;
        }
    }

    printf("%d %d", hour, min);
}