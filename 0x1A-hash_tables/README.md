# Hash Table Tasks

This directory contains C programs that implement various hash table operations. Each program is part of a specific task and includes the following functionality:

## Task 0: Create a Hash Table
- Function: `hash_table_t *hash_table_create(unsigned long int size);`
- Creates a hash table with a specified size.
- Returns a pointer to the newly created hash table.
- Returns NULL if something goes wrong.

## Task 1: Implement the djb2 Hash Function
- Function: `unsigned long int hash_djb2(const unsigned char *str);`
- Implements the djb2 hash algorithm for generating a hash value from a string.

## Task 2: Get the Index of a Key
- Function: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
- Returns the index at which a key should be stored in the hash table.

## Task 3: Add an Element to the Hash Table
- Function: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
- Adds or updates a key-value pair in the hash table.
- Handles collisions by adding new nodes at the beginning of the list.

## Task 4: Retrieve a Value by Key
- Function: `char *hash_table_get(const hash_table_t *ht, const char *key);`
- Retrieves the value associated with a key in the hash table.
- Returns NULL if the key couldn't be found.

## Task 5: Print the Hash Table
- Function: `void hash_table_print(const hash_table_t *ht);`
- Prints the key-value pairs in the hash table in the order they appear.

## Task 6: Delete a Hash Table
- Function: `void hash_table_delete(hash_table_t *ht);`
- Deletes a hash table and frees the memory.

## Task 7: Sorted Hash Table (Advanced)
- Implement a sorted hash table using a custom data structure.
- Functions include creating, setting, getting, printing, and deleting the sorted hash table.

Please refer to the respective C files in the repository for the source code for each task.

## Usage

To test these functions, you can compile the provided test files and run the resulting executables. Make sure to include the necessary headers and source files.

Enjoy experimenting with hash tables!

