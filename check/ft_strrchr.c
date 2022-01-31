/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:30:13 by jselway           #+#    #+#             */
/*   Updated: 2022/01/31 22:09:14 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		len;

	ch = c;
	len = ft_strlen(s);
	if (ch == '\0')
	{
		return ((char *)(s + len));
	}
	while (len > 0)
	{
		if (*(s + len) == ch)
		{
			return ((char *)(s + len));
		}
		len--;
	}
	return (NULL);
}
