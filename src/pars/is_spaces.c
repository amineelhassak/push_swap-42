#include "../../includes/headers.h"

int cw_is_spaces(char *str)
{
	while (*str)
	{
		if(!(*str == ' ' || (*str >= 9  && *str <= 13)))
			return (0);
		str++;
	}
	return (1);
}