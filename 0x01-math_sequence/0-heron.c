#include "heron.h"

t_cell *nuevo_nodo(double x0)
{
  t_cell *nodo;
  
  nodo = malloc(sizeof(t_cell))
  if (!nodo)
    return (NULL);
  nodo->elt = x0;
  nodo->next = NULL;
  return (nodo);
}

t_cell *heron(double p, double x0)
{
 	double x;
	t_cell *head;

	head = nuevo_nodo(x0);
  if (!head)
     return (NULL);
  aux = head;
	x = 0.5 * (x0 + (p / x0));
	while ((fabs(x - x0)) > pow(10, -7))
	{
		x0 = x;
		x = 0.5 * (x + (p / x));    
		head = nuevo_nodo(x0);
    head->next = aux;
    aux = head;
	}
	return (head);
}
