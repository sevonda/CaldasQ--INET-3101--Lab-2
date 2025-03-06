# Lab 2 Design Document  
**Santiago Caldas Quiroga**  
**INET 3101**  

## Program Description  
This program manages a simple in-memory database using dynamic memory allocation. It allows users to store, view, and modify records containing part details. The program uses `malloc()` and `free()` to manage memory manually without relying on arrays. Users can add new records, delete the last record, and check database details through a menu-driven interface.  

## Menu Definition  
When the program runs, the following menu is displayed:  

```
Database Menu  
1. Print all records  
2. Add a record  
3. Delete the last record  
4. Print number of records  
5. Print database size  
6. Print number of changes  
7. Exit  
Enter your choice:  
```

## Function Definitions  

### main()  
The `main()` function runs a loop that displays the menu and handles user input.  

#### Input Handling:  
- Ensures the input is a valid number.  
- Filters out invalid choices.  

#### Menu Options:  
- **Case 1:** Prints all records.  
- **Case 2:** Adds a new record with user-provided details.  
- **Case 3:** Deletes the last record (if any).  
- **Case 4:** Prints the number of stored records.  
- **Case 5:** Prints the database's memory size.  
- **Case 6:** Tracks and prints the number of database modifications.  
- **Case 7:** Exits the program.  

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
```

Just copy and paste this into a `README.md` file in your GitHub repository, and it should format correctly. Let me know if you need any changes! 🚀
