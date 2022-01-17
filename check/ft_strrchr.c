/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:30:13 by jselway           #+#    #+#             */
/*   Updated: 2022/01/17 17:35:31 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	char	ch;
	int		len;

	len = ft_strlen(s);
	if (ch == '\0')
	{
		return (s + len);
	}
	while (len > 0)
	{
		if (*(p + len) == ch)
		{
			return (p + len);
		}
	}
	return (NULL);
}
