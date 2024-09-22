#include <stdio.h>
#include <string.h>

int is_lucky_year(int year) {
    char str_year[10];
    sprintf(str_year, "%d", year);
    int nonzero_digits = 0;
    for (int i = 0; i < strlen(str_year); i++) {
        if (str_year[i] != '0') {
            nonzero_digits++;
        }
    }
    return nonzero_digits <= 1;
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
