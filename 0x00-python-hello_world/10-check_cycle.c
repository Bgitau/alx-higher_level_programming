#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: If there is no cycle - 0.
 *         If there is a cycle - 1.
 */

int check_cycle(listint_t *list)
{
  listint_t *bonface, *gitau;

  if (list == NULL || list->next == NULL)
    return (0);

  bonface = list->next;
  gitau = list->next->next;

  while (bonface && gitau && gitau->next)
    {
      if (bonface == gitau)
	return (1);

      gitau = bonface->next;
      gitau = gitau->next->next;
    }

  return (0);
}
