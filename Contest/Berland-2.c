#include <stdio.h>

int is_lucky_year(int year) {
    while (year > 0) {
        if (year % 10 > 1) {
            return 0;
        }
        year /= 10;
    }
    return 1;
}

int next_lucky_year(int current_year) {
    int next_year = current_year + 1;
    while (!is_lucky_year(next_year)) {
        next_year++;
    }
    return next_year;
}

int main() {
    int current_year = 2023;
    int next_lucky = next_lucky_year(current_year);
    int years_until_lucky = next_lucky - current_year;
    printf("Current year: %d\n", current_year);
    printf("Next lucky year: %d\n", next_lucky);
    printf("Years until next lucky year: %d\n", years_until_lucky);
    return 0;
}
