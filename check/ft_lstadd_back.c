/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:04:47 by jselway           #+#    #+#             */
/*   Updated: 2022/01/27 21:08:37 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	size_t	*p;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	p = *lst;
	while (p->next)
	{
		p = p->next;
	}
	p->next = new;
}
