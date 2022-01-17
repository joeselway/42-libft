/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 12:23:22 by jselway           #+#    #+#             */
/*   Updated: 2022/01/17 12:28:42 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') \
	|| (c >= 'a' && c <= 'z') \
	|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
