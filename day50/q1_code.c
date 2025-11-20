#include <stdio.h>

int main() {
    char date[20];
    char monthStr[12][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int day, month, year;

    fgets(date, sizeof(date), stdin);

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    printf("%02d-%s-%d", day, monthStr[month - 1], year);

    return 0;
}
