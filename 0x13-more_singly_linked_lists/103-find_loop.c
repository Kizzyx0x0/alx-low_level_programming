#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl, *fa;

	if (head == NULL || head->next == NULL)
		return (NULL);

	sl = head->next;
	fa = (head->next)->next;

	while (fa)
	{
		if (sl == fa)
		{
			sl = head;

			while (sl != fa)
			{
				sl = sl->next;
				fa = fa->next;
			}

			return (sl);
		}

		sl = sl->next;
		fa = (fa->next)->next;
	}

	return (NULL);
}
