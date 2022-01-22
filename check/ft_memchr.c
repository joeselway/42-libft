/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:58:21 by jselway           #+#    #+#             */
/*   Updated: 2022/01/22 17:15:30 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*p;

	ch = c;
	p = s;
	while (i < n)
	{
		if (s[i] == ch)
			return ((s + i));
		i++;
	}
	return (NULL);
}
