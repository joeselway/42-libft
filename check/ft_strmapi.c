/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:28:04 by jselway           #+#    #+#             */
/*   Updated: 2022/01/24 10:39:57 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*str;

	len = ft_strlen(s);
	str = malloc(sizeof(*s) * (len + 1));
	if (!str)
		return(NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++
	}
	str[i] = '\0';
	return (str);
}
