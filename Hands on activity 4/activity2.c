#include <stdio.h>
#include <string.h>
#define NAME_LENGTH 20

int main()
{
    int max_products;
    int i;

    printf("Enter the maximum number of products in the inventory: ");
    scanf("%d", &max_products);

    char product_names[max_products][NAME_LENGTH];
    int product_quantities[max_products];
    int choice, cpc=0;

    do
    {
        
        // User menu
        printf("\nMENU:\n");
        printf("\t1. Add a new product\n");
        printf("\t2. Update product quantity\n");
        printf("\t3. Display inventory\n");
        printf("\t4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        // Switch case for user choice

        switch (choice)
        {
        case 1:
            if (cpc == max_products) {
                printf("\nWARNING: Inventory has reached its limit.\n");
                break;
            }

            printf("\nEnter the name of the product: ");
            scanf("%s", &product_names[cpc]);

            printf("Enter the quantity: ");
            scanf("%d", &product_quantities[cpc]);

            cpc++;

            break;
        
        case 2:
            if (cpc == 0) {
                printf("\nThere are currently no items in the inventory.\n");
                break;
            }

            char text[NAME_LENGTH];

            printf("\nEnter the name of the product to update: ");
            scanf("%s", &text);

            int exists=0;
            for (i=0; i<cpc; i++) {
                if (strcmp(product_names[i], text) == 0) {
                    exists = 1;
                    printf("Enter the new quantity: ");
                    scanf("%d", &product_quantities[i]);
                    break;
                }
            }

            if (!exists) {
                printf("\nWARNING: '%s' product doesn't exist.\n", text);
            }

            break;
        
        case 3:
            if (cpc == 0) {
                printf("\nThere are currently no items in the inventory.\n");
                break;
            }

            printf("\nCURRENT INVENTORY\n");
            printf("____________________\n");
            for (i=0; i<cpc; i++) {
                printf("Item %d:\n", i+1);
                printf("\tName: %s\n", product_names[i]);
                printf("\tQuantity: %d\n", product_quantities[i]);
            }

            break;
        
        case 4:
            printf("\nExiting Program.");
            break;;
        
        default:
            printf("\nInvalid input. Please choose a valid option (1 2 3 4).\n");
            break;
        }

    } while (choice != 4);

    return 0;
}