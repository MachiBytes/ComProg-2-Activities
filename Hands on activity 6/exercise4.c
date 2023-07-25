#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* oddHead = malloc(sizeof(struct Node));
    struct Node* evenHead = malloc(sizeof(struct Node));

    // Get elements

    struct Node* ptr = head;
    for (int i=1; i< 11; i++) {
        struct Node* new = malloc(sizeof(struct Node));
        new->data = i;
        new->next = NULL;

        ptr->next = new;
        ptr = new;
    }

    // Print original list
    printf("This is the original list:\n");
    ptr = head->next;
    while (ptr != NULL) {
        printf("Data: %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

    // Separate
    struct Node* ptrEven = evenHead;
    struct Node* ptrOdd = oddHead;
    ptr = head->next;
    while (ptr != NULL) {
        if (ptr->data % 2 == 0) {
            ptrEven->next = ptr;
            ptrEven = ptrEven->next;
        } else {
            ptrOdd->next = ptr;
            ptrOdd = ptrOdd->next;
        }

        ptr = ptr->next;
    }

    // Print odd and even
    ptrEven = evenHead->next;
    printf("This is the even list\n");
    while (ptrEven != NULL) {
        printf("Data: %d\n", ptrEven->data);
        ptrEven = ptrEven->next;
    }

    printf("\n");

    ptrOdd = oddHead->next;
    printf("This is the odd list\n");
    while (ptrOdd != NULL) {
        printf("Data: %d\n", ptrOdd->data);
        ptrOdd = ptrOdd->next;
    }

    return 0;
}
