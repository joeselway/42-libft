/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:36:17 by jselway           #+#    #+#             */
/*   Updated: 2022/01/17 13:37:07 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	while (*str)
	{
		write(fd, str, ft_strlen(str));
		str++;
	}
	write(fd, "\n", 1);
}
