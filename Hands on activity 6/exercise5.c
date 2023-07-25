#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct Student {
    int roll_num;
    char name[60];
    int age;
    float gpa;
    struct Student* next;
};

int main (int argc, char *argv[]) {
    struct Student* head = malloc(sizeof(struct Student));
    head->next = NULL;

    int choice;

    struct Student* ptr = head;

    do {

        printf("\n");
        printf("Student Enrollment System\n");
        printf("\n");
        printf("\t1. Add a new student\n");
        printf("\t2. Display enrolled students\n");
        printf("\t3. Search for a student by roll number\n");
        printf("\t0. Exit\n");
        printf("\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        printf("\n");

        if (choice == 1) {

            struct Student* new = malloc(sizeof(struct Student));
            new->next = NULL;

            printf("Enter Roll Number: ");
            scanf("%d", &new->roll_num);
            getchar();

            printf("Enter Name: ");
            fgets(new->name, 60, stdin);
            strtok(new->name, "\n");

            printf("Enter Age: ");
            scanf("%d", &new->age);

            printf("Enter GPA: ");
            scanf("%f", &new->gpa);

            printf("\n");

            ptr->next = new;

            printf("Student added successfully!");

        } else if (choice == 2) {
            
            struct Student* tempptr = head->next;

            if (tempptr == NULL) {
                printf("There are currently no student records found.");
            } else {
                printf("Enrolled Students:\n");
                while (tempptr != NULL) {
                    printf("Roll Number: %d | Name: %s | Age: %d | GPA: %.2f\n", tempptr->roll_num, tempptr->name, tempptr->age, tempptr->gpa);
                    tempptr = tempptr->next;
                }
            }

        } else if (choice == 3) {

            struct Student* tempptr = head->next;

            if (tempptr == NULL) {
                printf("There are currently no student records found.");
            } else {

                int search, exists=0;
                printf("Enter Roll Number to search for: ");
                scanf("%d", &search);
                printf("\n");

                while (tempptr != NULL) {
                    if (tempptr->roll_num == search) {
                        exists=1;
                        printf("Roll Number: %d | Name: %s | Age: %d | GPA: %.2f", tempptr->roll_num, tempptr->name, tempptr->age, tempptr->gpa);
                        break;
                    }
                    tempptr = tempptr->next;
                }

                if (!exists) {
                    printf("Student not found.");
                }
            }           

        } else if (choice == 0) {

            printf("Exiting program!");

        } else {
            printf("Invalid choice.");
        }

    } while(choice != 0);

    return 0;
}