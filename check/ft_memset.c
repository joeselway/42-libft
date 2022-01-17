/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:38:19 by jselway           #+#    #+#             */
/*   Updated: 2022/01/17 13:46:51 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;

	p = b;
	while (i < len)
	{
		*p = (unsigned char)c;
		i++;
	}
	return (b);
}
