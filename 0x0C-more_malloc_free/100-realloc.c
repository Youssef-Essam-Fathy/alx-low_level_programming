#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: old size of array
 * @new_size: reallocated new size of array
 * Return: void
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pr;
	unsigned int indx;
	
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pr = malloc(new_size);
		if (pr == NULL)
			return (NULL);
		return (pr);
	}
	if (new_size > old_size)
	{
		pr = malloc(new_size);
		if (pr == NULL)
			return (NULL);
		for (indx = 0; indx < old_size && indx < new_size; indx++)
			*((char *)pr + indx) = *((char *)ptr + indx);
		free(ptr);
	}
	return (pr);
}
