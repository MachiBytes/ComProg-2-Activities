#include <stdio.h>
#include <stdlib.h>

struct Integer {
    int value;
    struct Integer* next;
};

int main (int argc, char *argv[]) {
    int nums[10] = {1, 4, 5, 6, 3, 6, 3, 2, 4, 7};

    struct Integer* head = malloc(sizeof(struct Integer));

    struct Integer* ptr = head;
    for (int i=0; i<10; i++) {
        struct Integer* new = malloc(sizeof(struct Integer));
        new->next = NULL;
        new->value = nums[i];
        ptr->next = new;
        ptr = new;
    }

    int u_nums[10] = {0}, ctr=0;

    struct Integer* prev = head;
    struct Integer* curr = head->next;

    int exists;
    while (curr != NULL) {
        exists = 0;
        for (int i=0; i<10; i++) {
            if (curr->value == u_nums[i]) {
                exists = 1;
                break;
            }
        }

        if (exists) {
            prev->next = curr->next;
            curr = prev->next;
            continue;
        }

        u_nums[ctr++] = curr->value;
        prev = curr;
        curr = prev->next;
    }

    printf("Here is a linked list without duplicates:\n");
    ptr = head->next;
    while (ptr != NULL) {
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }

    return 0;
}