/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 14:08:06 by jselway           #+#    #+#             */
/*   Updated: 2022/02/01 10:11:42 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_base10digits(long int n)
{
	int	i;

	if (n == 0)
		return (0);
	i = 1;
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			negflag;
	int			len;
	char		*str;

	nb = n;
	negflag = 0;
	if (nb < 0)
	{
		negflag = 1;
		nb *= -1;
		len = ft_base10digits(nb) + 1;
	}
	else
		len = ft_base10digits(nb);
	str = malloc(sizeof(*str) * len);
	if (negflag == 1)
		str[0] = '-';
	while ((len - 1) >= (0 + negflag))
	{
		str[len] = nb % 10;
		nb = nb / 10;
	}
	return (str);
}
