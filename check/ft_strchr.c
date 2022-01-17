/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:14:54 by jselway           #+#    #+#             */
/*   Updated: 2022/01/17 17:29:40 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	char	*p;
	char	ch;

	p = s;
	ch = c;
	while (*p)
	{
		if (*p == ch)
		{
			return (p);
		}
		p++;
	}
	if (ch == '\0')
	{
		return (p);
	}
	return (NULL);
}
