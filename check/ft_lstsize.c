/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:57:48 by jselway           #+#    #+#             */
/*   Updated: 2022/01/27 21:03:47 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int		count;

	if (!lst)
		return (0);
	count = 1;
	p = lst;
	while (p->next)
	{
		count++;
		p = p->next;
	}
	return (count);
}
