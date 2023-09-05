#include "lists.h"

/**
 * Examine_cycle - examine if a connecetion list that have a cycle
 * @list: Connection list to check
 * Return: 1 if the list of the cycle has a 0 and if it do not
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
