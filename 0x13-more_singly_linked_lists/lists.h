#ifndef LISTS_H
#define LISTS_H
/**
 * struct listint-s - singly linked list
 * @n: interger
 * @next: points to the next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;











#endif

