# Lab 2 Design Document  
**Santiago Caldas Quiroga**  
**INET 3101**  

## Program Description  
This program manages in-memory database designed to allows users to store, view, and modify records containing part details. The program manually manages memory without relying on arrays. Additionally, Users can add new records, delete the last record, and check database details through a menu-driven interface.  

## Menu Definition  
When the program runs, the following menu is displayed:  

Database Menu
1. Print all records
2. Add record
3. Delete the last record
4. Print number of records
5. Print database size
6. Print number of changes
7. Exit
Enter your choice:

## Function Definitions  

#### Input Handling:  
- Ensures the input is a valid number.  
- Filters out invalid choices.
  
## How does it Work?

The program operates through a menu-driven interface, allowing users to interact with the database by selecting various options. Here's a breakdown of how each functionality works:

1. **Print All Records:**
   - The program iterates through the list of stored records and prints the details of each part, including part number, name, size, and cost.

2. **Add a Record:**
   - The program prompts the user to enter details for a new part. It then uses `malloc()` to allocate memory for the new record and adds it to the database.

3. **Delete the Last Record:**
   - If there are any records in the database, the program uses `free()` to release the memory allocated for the last record and removes it from the list.

4. **Print Number of Records:**
   - The program counts and displays the total number of records currently stored in the database.

5. **Print Database Size:**
   - The program calculates and displays the total memory size occupied by the database, including all stored records.

6. **Print Number of Changes:**
   - The program tracks the number of modifications made to the database (such as adding or deleting records) and displays this count.

7. **Exit:**
   - The program terminates, releasing any dynamically allocated memory before exiting.


## Key Functionalities  

This program implements several key **C programming concepts**, including:  

- **Dynamic Memory Allocation:** Uses `malloc()` to allocate memory for records and `free()` to release unused memory.  
- **Structs for Data Storage:** Uses a `struct` to store part details like part number, name, size, and cost.  
- **Pointers for Database Management:** Maintains a pointer to dynamically allocated records, updating it as records are added or removed.  
- **User Input Validation:** Ensures the program only processes valid input to prevent errors.  

## File Listing  
- **CaldasQuiroga_Lab2.c** – The full program implementation.  
- **Comp_Lab2.c** – Compiled code file.  
- **README.md** – This document explaining the project.  
