#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30], address[100], food_items[30][50];
    float avg_cost;
    int n_foods;
} Restaurant;

Restaurant restaurants[100];

int crc;

void add_restaurant();
void show_records();

int main (int argc, char *argv[]) {
    int choice;

    printf("\nWelcome to the restaurant records!\n");
    printf("========================================\n");

    do {
        printf("Please choose an option.\n");
        printf("\t1. Exit\n");
        printf("\t2. Add a restaurant\n");
        if (crc > 0) {
            printf("\t3. View all restaurants\n");
        }
        printf("\n");
        printf("Action: ");
        scanf("%d", &choice);
        getchar();
        printf("\n========================================\n");
        printf("\n");

        if (crc == 0) {
            switch (choice) {
                case 1:
                    printf("Exiting records!\n");
                    break;
            
                case 2:
                    if (crc == 100) {
                        printf("Maximum capacity for records have already been reached.\n");
                    }
                    add_restaurant();

                    printf("\nAdded a restaurant to the record!\n");
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
                if (crc == 100) {
                    printf("Maximum capacity for records have already been reached.\n");
                }
                add_restaurant();

                printf("\nAdded a restaurant to the record!\n");
                break;
            
            case 3:
                show_records();
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

void add_restaurant() {
    Restaurant temp;

    printf("Enter name: ");
    fgets(temp.name, 30, stdin);
    strtok(temp.name, "\n");

    printf("Enter Address: ");
    fgets(temp.address, 100, stdin);
    strtok(temp.address, "\n");

    printf("Number of food items: ");
    scanf("%d", &temp.n_foods);
    getchar();

    for (int i=0; i<temp.n_foods; i++) {
        printf("Enter food item no. %d: ", i+1);
        fgets(temp.food_items[i], 50, stdin);
        strtok(temp.food_items[i], "\n");
    }

    printf("Enter average cost: ");
    scanf("%f", &temp.avg_cost);
    getchar();

    restaurants[crc] = temp;
    crc++;
}

void show_records () {
    printf("Printing all records:\n");
    printf("===============================================\n");

    for (int i=0; i<crc; i++) {
        printf("Name: %s\n", restaurants[i].name);
        printf("Address: %s\n", restaurants[i].address);
        printf("Average Cost: %.2f\n", restaurants[i]. avg_cost);
        printf("Menu:\n");
        for (int j=0; j<restaurants[i].n_foods; j++) {
            printf("%d: %s\n", j+1, restaurants[i].food_items[j]);
        }
        printf("===============================================\n");
    }
}