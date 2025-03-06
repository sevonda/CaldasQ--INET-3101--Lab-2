#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Struct is creaed to hold part info
struct Part {
    int part_num;
    char part_name[100];
    float part_size;
    char part_size_metric[10];
    float part_cost;
};


int main() {
    int choice;
    int numRecords = 0;           
    struct Part* database = NULL; 
    int mods = 0;                 //These are the variables which will hold the choice of input,as well as the tracking of actions within the database

    while (1) {
        // Displays menu to user
        printf("\nDatabase Menu\n");
        printf("1. Print all records\n");
        printf("2. Add record\n");
        printf("3. Delete the last record\n");
        printf("4. Print number of records\n");
        printf("5. Print database size\n");
        printf("6. Print/increment number of changes\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");

		//Checks if input is valid
        if (scanf("%d", &choice) != 1) {
            while(getchar() != '\n'); 
            printf("Invalid input! Please enter a number.\n");
            continue;
        }

        if (choice < 1 || choice > 7) {
            printf("Invalid choice! Please enter a number between 1 and 7.\n");
            continue;
        }




		// switch cases are used to hold the user's choice
        switch (choice) {
        	
            case 1: // Print all records in database.
                if (numRecords == 0) {
                    printf("No records available.\n");
                } else {
                    for (int i = 0; i < numRecords; i++) {
                        printf("Record %d:\n", i + 1);
                        printf("\tPart number: %d\n", database[i].part_num);
                        printf("\tPart name: %s\n", database[i].part_name);
                        printf("\tPart size: %.2f\n", database[i].part_size);
                        printf("\tPart size metric: %s\n", database[i].part_size_metric);
                        printf("\tPart cost: $%.2f\n", database[i].part_cost);
                    }
                }
                break;

            case 2: // Add records to database.
            {
                struct Part newRecord;
                printf("Enter part number: ");
                scanf("%d", &newRecord.part_num);

                printf("Enter part name: ");
                scanf(" %[^\n]", newRecord.part_name);

                printf("Enter part size: ");
                scanf("%f", &newRecord.part_size);

                printf("Enter part size metric (e.g., mm, kg): ");
                scanf("%s", newRecord.part_size_metric);

                printf("Enter part cost: ");
                scanf("%f", &newRecord.part_cost);
                
				//malloc is manually added for every new entry in database
                int newSize = numRecords + 1; 
                struct Part* newDatabase = (struct Part*)malloc(newSize * sizeof(struct Part));
                if (newDatabase == NULL) {
                    printf("Memory allocation failed.\n");
                    break;
                }

                for (int i = 0; i < numRecords; i++) {
                    newDatabase[i] = database[i];
                }

                newDatabase[numRecords] = newRecord;
                numRecords++;

                free(database);
                database = newDatabase;

                mods++;
                break;
            }

            case 3: // Delete the last record on database.
                if (numRecords == 0) {
                    printf("No records to delete.\n");
                } else {
                    int newSize = numRecords - 1;
                    if (newSize == 0) {
                        free(database);
                        database = NULL;
                        numRecords = 0;
                        printf("Last record deleted. Database is now empty.\n");
                    } else {
                        struct Part* newDatabase = (struct Part*)malloc(newSize * sizeof(struct Part));
                        if (newDatabase == NULL) {
                            printf("Memory allocation failed.\n");
                            break;
                        }
                        for (int i = 0; i < newSize; i++) {
                            newDatabase[i] = database[i];
                        }
                        free(database);
                        database = newDatabase;
                        numRecords--;
                        printf("Last record deleted.\n");
                    }
                    mods++;
                }
                break;

            case 4: // Print number of records on database.
                printf("Number of records: %d\n", numRecords);
                break;

            case 5: // Print database size in bytes.
            {
                int dbSize = numRecords * (int)sizeof(struct Part);
                printf("Database size: %d bytes\n", dbSize);
                break;
            }

            case 6: // Print/ or increment number of changes.
            {
                int action;
                printf("Enter 1 to print the number of changes, or 0 to increment the changes count: ");
                if (scanf("%d", &action) != 1) {
                    while(getchar() != '\n');
                    printf("Invalid input. Please enter 0 or 1.\n");
                    break;
                }
                if (action == 1) {
                    printf("Database has been modified %d times\n", mods);
                } else if (action == 0) {
                    mods++;
                    printf("Database has been modified %d times\n", mods);
                } else {
                    printf("Invalid action. Please enter 0 or 1.\n");
                }
                break;
            }

            case 7: // Exit program.
                printf("Program exited.\n");
                free(database);
                return 0;
        }
    }

    return 0;
}
