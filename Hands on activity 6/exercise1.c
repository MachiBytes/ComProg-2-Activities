#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[30];
    int score;
    struct Student* next;
};

int main (int argc, char *argv[]) {
    struct Student* head = malloc(sizeof(struct Student));
    head->next = NULL;

    char names[][30] = {"Mark", "Achiles", "Guevarra", "Flores", "Junior"};
    int scores[5] = {9, 6, 8, 8, 10};

    struct Student* ptr = head;
    for (int i = 0; i < 5; i++) {
        struct Student* new = malloc(sizeof(struct Student));
        new->next = NULL;
        strcpy(new->name, names[i]);
        new->score = scores[i];
        ptr->next = new;
        ptr = new;
    }

    struct Student* highest = NULL;
    ptr = head->next;
    while (ptr != NULL) {
        if (highest == NULL || ptr->score > highest->score) {
            highest = ptr;
        }
        ptr = ptr->next;
    }

    printf("The highest score is achieved by %s with %d points.", highest->name, highest->score);

    return 0;
}
