/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:08:55 by jselway           #+#    #+#             */
/*   Updated: 2022/02/01 10:12:11 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	total_size;
	char	*p;

	total_size = count * size;
	p = malloc(total_size);
	i = 0;
	while (i < total_size && p)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
