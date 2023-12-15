#include "../../includes/headers.h"

int cw_pars(t_stack *stack_a,int c,char **v)
{
	int			i;
	int			j;
	char		**str;
	long		n;
	int k;

	j = 0;
	k = 0;
	if (c <= 2)
		return 0;
	else
	{
		i = 1;
		if (!cw_is_empty(v))
			return 0;
		while (i < c)
		{
			str = ft_split(v[i], ' ',&k);
			j = 0;
			while (str[j])
			{
				if(str[j][0] == '\0')
					exit(write(2, "ERROR\n", 6));
				n = cw_atoi(str[j]);
				if (!cw_check_all_numbers(str[j]) || n == 2147483648)
					return (0);
				cw_stack_add(stack_a, n);
				j++;
			}
			cw_free(str,k);
			i++;
		}
			exit(0);
	}
	if(!cw_n_double(stack_a))
			return (0);
	return 1;
}