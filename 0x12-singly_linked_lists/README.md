# 0x12. C - Singly linked lists

# Concepts
 ## Data Structures
 ### What is a data struction?
 Data structures, as the term implies, are a way of structuring data in order to efficiently store, find, use, and create data, depending on the task at hand. If data is a plate of food, data structures are your utensils (algorithms would be how to effectively use those utensils in this analogy). Just as you will likely select a spoon to eat a bowl of soup rather than a knife, you will learn over time to select and properly use data structures which fit the nature of the data you are working with. When you begin learning basic data structures such as arrays and linked lists, you will start to conceptualize how data is stored, searched, and edited, and what these operations will contribute to the space/time complexity of your program at runtime (this will make more sense once you start to learn about Big O notation). As you continue to learn more complex data structures, you may notice that you need to think more abstractly and deliberately in order to properly implement them. But with patience and practice you will begin to see patterns emerge that will allow you to intuitively see which situation calls for which data structure, just as you know to pick up a spoon when you see a bowl of soup.


# Learning Objectives
~ At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
  . When and why using linked lists vs arrays
  . How to build and use linked lists

## Quiz
 0. In a singly linked list, what are possible directions to traverse it? (select all possible answers)
Answer - Forward
 1. What’s the “head” of a linked list?
Answer - It's the first node
 2. What’s a node? (select all possible answers)
Answers - It’s a space allocated in memory
        - It’s a structure with a pointer to the next node and value information
 3. What’s the “tail” of a linked list?
Answer - It’s the node with the pointer to the next equals to NULL
 4. Arrays Vs Linked Lists: select all true statements
Answers - Array can contain as value a structure
        - Memory is aligned for an Array - each elements are back to back in the memory
        - Linked list can contain as value a structure
        - We can easily removed an element from a Linked list
        - We can add elements indefinitely to a linked list

# Tasks

0. Print list

Write a function that prints all the elements of a list_t list.
 . Prototype: size_t print_list(const list_t *h);
 . Return: the number of nodes
 . Format: see example
 . If str is NULL, print [0] (nil)
 . You are allowed to use printf

1. List length

Write a function that returns the number of elements in a linked list_t list.
 . Prototype: size_t list_len(const list_t *h);

2. Add node

Write a function that adds a new node at the beginning of a list_t list.
 . Prototype: list_t *add_node(list_t **head, const char *str);
 . Return: the address of the new element, or NULL if it failed
 . str needs to be duplicated
 . You are allowed to use strdup

3. Add node at the end

Write a function that adds a new node at the end of a list_t list.
 . Prototype: list_t *add_node_end(list_t **head, const char *str);
 . Return: the address of the new element, or NULL if it failed
 . str needs to be duplicated
 . You are allowed to use strdup

4. Free list

Write a function that frees a list_t list.
 . Prototype: void free_list(list_t *head);

5. The Hare and the Tortoise

Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
 . You are allowed to use the printf function

6. Real programmers can write assembly code in any language

Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
 . You are only allowed to use the printf function
 . You are not allowed to use interrupts
 . Your program will be compiled using nasm and gcc:
