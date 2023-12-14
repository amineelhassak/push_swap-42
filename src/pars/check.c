#include "../../includes/headers.h"

bool cw_check_all_numbers(char *str)
{
	if (*str == '-' || *str=='+')
			str++;
	while (*str)
	{
		if (!ft_isdigit(*(str++)))
			return false;
	}
	return true;
}
