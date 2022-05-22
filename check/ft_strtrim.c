/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:02:33 by jselway           #+#    #+#             */
/*   Updated: 2022/05/22 18:52:29 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_istrim(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	len;
	char	*str;

	start = 0;
	while (s1[start] && (ft_istrim(s1[start], set) == 1))
		start++;
	len = 0;
	while (s1[start + len])
		len++;
	while (ft_istrim(s1[start + len - 1], set) == 1)
		len--;
	str = malloc(sizeof(*s1) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[start + i] && i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
