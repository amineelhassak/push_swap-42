#include "../../includes/headers.h"

int cw_is_empty(char **av)
{
	int i = 0;
	while (av[i])
	{
		if (av[i][0] == '\0')
			return 0;
		if (cw_is_spaces(av[i]))
			return 0;
		i++;
	}
	return 1;
}