#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: count
 * @av: value
 * Return: p
 */

char *argstostr(int ac, char **av)
{
	int i;
	int tlen = 0;
	char *arg;
	char *p;
	int x = 0;
	int arg_l = 0;

	if (ac == 0 || av == NULL)
		return (0);

	for (i = 0 ; i < ac ; i++)
	{
		arg = av[i];
		if (arg != NULL)
			tlen += strlen(arg) + 1;
	}

	p = malloc(tlen * sizeof(char));
	if (p == NULL)
		return (0);

	for (i = 0 ; i < ac ; i++)
	{
		arg = av[i];
		if (arg != NULL)
		{
			arg_l = strlen(arg);
			strcpy(p + x, arg);
			x += arg_l;
			if (i < ac - 1)
				p[x++] = '\n';
		}
	}

	return (p);
}
