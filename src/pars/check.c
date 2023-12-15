#include "../../includes/headers.h"

bool cw_check_all_numbers(char *str)
{
	int i  = 0;

	if (str[i] == '-' || str[i]=='+')
			i++;
	while (str[i])
	{
		if (!ft_isdigit((str[i++])))
			return false;
	}
	i = 0;
	while (str[i] == '0')
		i++;
	if (ft_strlen(str + i) > ft_strlen("+2147483647"))
		exit(write(2, "ERROR\n", 6));
	return true;
}
