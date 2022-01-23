/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:19:30 by jselway           #+#    #+#             */
/*   Updated: 2022/01/23 12:51:07 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	copy_word(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s2[i] && !ft_isspace(s2[i]))
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (i + 1);
}

unsigned int	count_strings(char *str)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 1;
	while (str[i])
	{
		if (ft_isspace(str[i]))
		{
			count++;
			while (ft_isspace(str[i]))
				i++;
			i--;
		}
		i++;
	}
	return (count);
}

char	*allocate_string(char *str, char c)
{
	char			*newstr;
	unsigned int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	newstr = malloc(sizeof(*str) * (i + 1));
	return (newstr);
}

char	**ft_nullalloc(void)
{
	char	**array;

	array = malloc(sizeof(*array));
	*array = NULL;
	return (array);
}

char	**ft_split(char const *str, char c)
{
	char			*p;
	char			**strings;
	unsigned int	count;
	unsigned int	j;
	unsigned int	i;

	p = str;
	if (!*str)
		return (ft_nullalloc());
	count = count_strings(str);
	strings = malloc(sizeof(p) * count + 1);
	i = 0;
	j = 0;
	while (str[i] == c)
		i++;
	while (str[i] && j < count)
	{
		strings[j] = allocate_string(&str[i], c);
		i = i + copy_word(strings[j], &str[i]);
		j++;
		while (str[i] == c && str[i])
			i++;
	}
	return (strings);
}
