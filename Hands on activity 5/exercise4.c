// Exercise 4
#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct {
    int empid;
    char name[50];
    int salary;
} Employee;

void add_employee(Employee *database, int *ctr);
void display_details(Employee *database, int *ctr);
void avg_salary(Employee *database, int *ctr);

int main (int argc, char *argv[]) {
    printf("Employee Management System\n");
    printf("\n");

    int choice;
    Employee database[100];
    int ctr=0;

    do
    {
        printf("Menu:\n");
        printf("\t1. Add an employee\n");
        printf("\t2. Display employee details\n");
        printf("\t3. Calculate average salary\n");
        printf("\t0. Exit\n");
        printf("\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        printf("\n");

        switch (choice)
        {
        case 1:
            add_employee(database, &ctr);
            break;
        
        case 2:
            display_details(database, &ctr);
            break;

        case 3:
            avg_salary(database, &ctr);
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

void add_employee(Employee *database, int *ctr) {
    if (*ctr == 100) {
        printf("Maximum records reached.\n");
        printf("\n");
    }

    Employee temp;
    printf("Enter employee id: ");
    scanf("%d", &temp.empid);
    getchar();

    printf("Enter employee name: ");
    fgets(temp.name, 50, stdin);
    strtok(temp.name, "\n");

    printf("Enter employee salary: ");
    scanf("%d", &temp.salary);
    printf("\n");

    *(database+*(ctr)) = temp;
    *(ctr) += 1;
}

void display_details(Employee *database, int *ctr) {
    if (*ctr == 0) {
        printf("There are currently no records.\n");
        printf("\n");
        return;
    }

    printf("Employee Details:\n");
    printf("\n");

    for (int i=0; i<*ctr; i++) {
        printf("ID: %d\n", database[i].empid);
        printf("Name: %s\n", database[i].name);
        printf("Salary: %d\n", database[i].salary);
        printf("\n");
    }
}

void avg_salary(Employee *database, int *ctr) {
    if (*ctr == 0) {
        printf("There are currently no records.\n");
        printf("\n");
        return;
    }

    double sum=0;

    for (int i=0; i<*ctr; i++) {
        sum += database[i].salary;
    }

    printf("Average salary: %.2lf\n", sum / *ctr);
    printf("\n");
}
