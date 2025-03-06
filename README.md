# Lab 2 Design Document  
**Santiago Caldas Quiroga**  
**INET 3101**  

## Program Description  
This program manages a simple in-memory database using dynamic memory allocation. It allows users to store, view, and modify records containing part details. The program manually manage memory without relying on arrays. Additionally, users can add new records, delete the last record, and check database details through a menu-driven interface.  

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

#### Menu Options:  
- **Option 1:** Prints all records.  
- **Option 2:** Adds a new record with user-provided details.  
- **Option 3:** Deletes the last record (if any).  
- **Option 4:** Prints the number of stored records.  
- **Option 5:** Prints the database's memory size.  
- **Option 6:** Tracks and prints the number of database modifications.  
- **Option 7:** Exits the program.

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
