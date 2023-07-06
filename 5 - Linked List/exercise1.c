#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n_nodes, i;

    // Initialize linked list
    struct Node* head = malloc(sizeof(struct Node));
    head->next = NULL;

    // Get input for number of nodes
    system("cls");
    printf("Input the number of nodes: ");
    scanf("%d", &n_nodes);
    printf("\n");

    // Initialize a pointer by assigning it to the head
    struct Node* ptr = head;
    for (i=0; i<n_nodes; i++) {
        // Create a temporary Node pointer called `new`
        struct Node* new = malloc(sizeof(struct Node));
        new->next = NULL;

        // Get input for data of `new`
        printf("Input data for node %d: ", i+1);
        scanf("%d", &new->data);

        ptr->next = new;  // Assign `new` to the `next` member of the current Node pointer
        ptr = new;  // Assign `new` to be the latest location of the pointer
    }

    // Printing of results
    printf("\n");
    printf("Data entered in the list:\n");

    // Re-assign `ptr` Node to `head`
    ptr = head->next;
    for (i=0; i<n_nodes; i++) {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->next;  // Assign the next Node to the `ptr` Node
    }

}