#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    int count = 0;
    int middle = 0;

    // Create the linked list
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = NULL;

    struct Node* current = head;

    int n;
    printf("How many integers would you like to add? ");
    scanf("%d", &n);

    printf("\n");

    // Add elements to the linked list
    for (int i = 0; i < n; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->next = NULL;

        printf("Enter data for node %d: ", i+1);
        scanf("%d", &newNode->data);

        current->next = newNode;
        current = current->next;
    }

    // Count the number of elements in the linked list
    current = head->next;
    while (current != NULL) {
        count++;
        current = current->next;
    }

    printf("%d", count);

    // Find the middle element
    current = head;
    for (int i = 0; i < count / 2; i++) {
        current = current->next;
    }
    
    current = current->next;

    // Get the middle element value
    middle = current->data;

    // Print the middle element
    printf("The middle element of the linked list is: %d\n", middle);

    return 0;
}
