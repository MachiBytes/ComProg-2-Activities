// Exercise 5
#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct {
    int studid;
    char name[50];
    int age;
    char grade[4];
    int grades[5];
} Student;

Student database[100];
int ctr;

void add_student();
void search_database();
void display_students();

int main (int argc, char *argv[]) {
    printf("Student Database Management\n");
    printf("\n");

    int choice;

    do
    {
        printf("Menu:\n");
        printf("\t1. Add a student\n");
        printf("\t2. Search for a student\n");
        printf("\t3. Display all students\n");
        printf("\t0. Exit\n");
        printf("\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        printf("\n");

        switch (choice)
        {
        case 1:
            add_student();
            break;
        
        case 2:
            search_database();
            break;

        case 3:
            display_students();
            break;
        
        case 0:
            printf("Exiting program.\n");
            return 0;
        
        default:
            break;
        }

    } while (choice != 0);

    return 0;
}

void add_student() {
    Student temp;
    printf("Enter student ID: ");
    scanf("%d", &temp.studid);
    getchar();

    printf("Enter student name: ");
    fgets(temp.name, 50, stdin);
    strtok(temp.name, "\n");

    printf("Enter student age: ");
    scanf("%d", &temp.age);
    getchar();

    printf("Enter student grade: ");
    scanf("%s", temp.grade);
    printf("%s\n", temp.grade);

    printf("\n");
    printf("Enter marks for 5 subjects:\n");
    for (int i=0; i<5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &temp.grades[i]);
    }

    database[ctr] = temp;
    ctr++;

    printf("\n");
    printf("Student addedd successfully!\n");
    printf("\n");
}

void search_database() {
    if (ctr == 0) {
        printf("There are currently no records.\n");
        printf("\n");
        return;
    }

    int search;
    printf("Enter student ID to search: ");
    scanf("%d", &search);
    printf("\n");

    int exists=0;
    for (int i=0; i<ctr; i++) {
        if (database[i].studid == search) {
            Student stud = database[i];
            printf("Student details:\n");
            printf("ID: %d\n", stud.studid);
            printf("Name: %s\n", stud.name);
            printf("Age: %d\n", stud.age);
            printf("Grade: %s\n", stud.grade);
            printf("Marks: ");
            for (int j=0; j<5; j++) {
                printf("%d ", stud.grades[j]);
            }
            printf("\n");
            exists=1;
        }
    }

    if (!exists) {
        printf("Unfortunately, that student ID doesn't exist in the records.\n");
    }

    printf("\n");
}

void display_students() {
    if (ctr == 0) {
        printf("There are currently no records.\n");
        printf("\n");
        return;
    }

    for (int i=0; i<ctr; i++) {
        Student stud = database[i];
        printf("Student details:\n");
        printf("ID: %d\n", stud.studid);
        printf("Name: %s\n", stud.name);
        printf("Age: %d\n", stud.age);
        printf("Grade: %s\n", stud.grade);
        printf("Marks: ");
        for (int j=0; j<5; j++) {
            printf("%d ", stud.grades[j]);
        }
        printf("\n");
    }
}
