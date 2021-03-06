/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:06:54 by jselway           #+#    #+#             */
/*   Updated: 2022/02/01 10:16:59 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbl;
	int			div;
	int			mod;
	char		modchar;

	nbl = n;
	if (nbl < 0)
	{
		nbl = nbl * -1;
		write(1, "-", 1);
	}
	div = nbl / 10;
	mod = nbl % 10;
	if (div > 0)
	{
		ft_putnbr_fd(div, fd);
	}
	modchar = mod + 48;
	write(fd, &modchar, 1);
}
