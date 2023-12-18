/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amel-has <amel-has@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:08:10 by amel-has          #+#    #+#             */
/*   Updated: 2023/12/18 18:38:46 by amel-has         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cw_count_words(char const *str, char c)
{
	int	index;
	int	count;
	int	i;

	count = 0;
	index = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			index = 0;
		else if (index == 0)
		{
			count++;
			index = 1;
		}
		i++;
	}
	return (count);
}

static char	*get_word(const char *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	i = -1;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (0);
	while ((++i) < len)
		word[i] = s[i];
	word[len] = '\0';
	return (word);
}

void	*cw_free(char **arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
		free(arr[i++]);
	free(arr);
	return (0);
}

char	**ft_split(const char *s, char c, int *k)
{
	char	**str;
	int		i;

	i = 0;
	*k = (cw_count_words(s, c));
	if (!s)
		return (0);
	str = (char **)malloc((*k + 1) * sizeof(char *));
	if (!str)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			str[i] = get_word(s, c);
			if (!str[i])
				return (cw_free(str, i));
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	return (str[i] = NULL, str);
}
