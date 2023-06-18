#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char first_name[30];
    char last_name[30];
    int total_units;
    float gpa;
} Student;

Student students[100];

int csc=0;

void show_records();
void add_student();
void modify_record();

int main () {
    int choice;

    printf("\nWelcome to the student records!\n");
    printf("========================================\n");

    do {
        printf("Please choose an option.\n");
        printf("\t1. Exit\n");
        printf("\t2. Add student record\n");
        if (csc > 0) {
            printf("\t3. Show all records\n");
            printf("\t4. Modify student record\n");
        }
        printf("\n");
        printf("Action: ");
        scanf("%d", &choice);
        getchar();
        printf("\n========================================\n");
        printf("\n");

        if (csc == 0) {
            switch (choice) {
                case 1:
                    printf("Exiting records!\n");
                    break;
            
                case 2:
                    if (csc == 50) {
                        printf("Maximum capacity for records have already been reached.\n");
                    }
                    add_student();

                    printf("\nAdded a student record!\n");
                    break;
                
                default:
                    printf("Invalid choice. Please try again.\n");
                    break;
            }
            printf("\n========================================\n");
            printf("\n");
            continue;
        }

        switch (choice) {
            case 1:
                printf("Exiting records!\n");
                break;
            
            case 2:
                if (csc == 50) {
                    printf("Maximum capacity for records have already been reached.\n");
                }
                add_student();

                printf("\nAdded a student record!\n");
                break;
            
            case 3:
                show_records();
                break;
            
            case 4:
                modify_record();
                break;
            
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        printf("\n========================================\n");
        printf("\n");

    } while (choice != 1);

    return 0;
}

void show_records () {
    printf("|===================================================================================================|\n");
    printf("| Student ID | First Name                     | Last Name                      | Total Units | GPA  |\n");
    printf("|===================================================================================================|\n");

    for (int i=0; i<csc; i++) {
        printf("| %-3i        | %-30s | %-30s | %-2i          | %-.2f |\n", students[i].id, students[i].first_name, students[i].last_name, students[i].total_units, students[i].gpa);
        printf("|===================================================================================================|\n");
    }
}

void add_student () {
    Student temp;
    temp.id = csc + 1;
    printf("First name: ");
    fgets(temp.first_name, 30, stdin);
    strtok(temp.first_name, "\n");

    printf("Last name: ");
    fgets(temp.last_name, 30, stdin);
    strtok(temp.last_name, "\n");

    printf("Total units completed: ");
    scanf("%d", &temp.total_units);
    printf("GPA: ");
    scanf("%f", &temp.gpa);

    students[csc++] = temp;
}

void modify_record() {
    int id=0;

    do {
        printf("Enter student ID (0 to return): ");
        scanf("%d", &id);
        getchar();

        if (id > csc || id < 0) {
            printf("\nInvalid input. Please try again.\n\n");
        } else if (id == 0) {
            printf("Returning to main program.\n");
            return;
        }
    } while (id > csc || id < 0);

    Student temp;
    temp.id = id;

    printf("First name: ");
    fgets(temp.first_name, 100, stdin);
    strtok(temp.first_name, "\n");

    printf("Last name: ");
    fgets(temp.last_name, 100, stdin);
    strtok(temp.last_name, "\n");

    printf("Total units completed: ");
    scanf("%d", &temp.total_units);

    printf("GPA: ");
    scanf("%f", &temp.gpa);

    students[id-1] = temp;

    printf("\nSuccessfully modified record.\n\n");
    show_records();
}