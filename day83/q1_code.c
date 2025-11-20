#include <stdio.h>

enum Months {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    int m;

    for (m = JANUARY; m <= DECEMBER; m++) {
        if (m == JANUARY) printf("January: 31 days\n");
        else if (m == FEBRUARY) printf("February: 28 days\n");
        else if (m == MARCH) printf("March: 31 days\n");
        else if (m == APRIL) printf("April: 30 days\n");
        else if (m == MAY) printf("May: 31 days\n");
        else if (m == JUNE) printf("June: 30 days\n");
        else if (m == JULY) printf("July: 31 days\n");
        else if (m == AUGUST) printf("August: 31 days\n");
        else if (m == SEPTEMBER) printf("September: 30 days\n");
        else if (m == OCTOBER) printf("October: 31 days\n");
        else if (m == NOVEMBER) printf("November: 30 days\n");
        else if (m == DECEMBER) printf("December: 31 days\n");
    }

    return 0;
}
