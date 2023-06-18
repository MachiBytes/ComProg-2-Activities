#include <stdio.h>

typedef struct {
    int month_num;
    char month_name[10];
    int n_days;
} Month;

int main (int argc, char *argv[]) {
    Month jan = {1, "January", 31};
    Month feb = {2, "February", 28};
    Month mar = {3, "March", 31};
    Month apr = {4, "April", 30};
    Month may = {5, "May", 31};
    Month jun = {6, "June", 30};
    Month jul = {7, "July", 31};
    Month aug = {8, "August", 31};
    Month sep = {9, "September", 30};
    Month oct = {10, "October", 31};
    Month nov = {11, "November", 30};
    Month dec = {12, "December", 31};

    Month months[] = {jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

    for (int i=0; i<12; i++) {
        printf("Month %02d: %s has %d days.\n", months[i].month_num, months[i].month_name, months[i].n_days);
    }
    
    return 0;
}