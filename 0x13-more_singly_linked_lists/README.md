# 0x13. C - More singly linked lists

## Description
- A continutation of the 0x12-singly_linked_lists project.

## Data used in this project
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
