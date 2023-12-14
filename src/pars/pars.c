#include "../../includes/headers.h"

 static int long cw_atoi(const char *str)
{
	int		s;
	size_t	r;
	int		i;

	s = 1;
	i = 0;
	r = 0;
	while (str[i] && ((str[i] == 32) || ((str[i] >= 9) && (str[i] <= 13))))
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
			s *= -1;
		i++;
	}
	while ((*(str + i) >= '0' && *(str + i) <= '9') && *(str + i))
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	if ((r > INT_MAX && s == 1) || ((r * s) < (unsigned long)INT_MIN && s == -1))
		return (2147483648);
	return ((int)(s * r));
}

int cw_pars(t_stack *stack_a,int c,char **v)
{
	int i;
	int j;
	char **str;
	int long n;
	
	j = 0;
	if(c == 1)
		return 0;
	if (c >= 2)
	{
		i = 1;
		while (i < c)
		{
			str = ft_split(v[i] , ' ');
			j = 0;
			while(str[j])
			{
				n = cw_atoi(str[j]);
				if(!cw_check_all_numbers(str[j]) || n == 2147483648)
					return (0);
				cw_stack_add(stack_a,n);
				j++;
			}
			i++;
		}
	}
	if(!cw_n_double(stack_a))
			return (0);
	return 1;
}