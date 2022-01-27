/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:17:41 by jselway           #+#    #+#             */
/*   Updated: 2022/01/27 21:24:13 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (!(*lst) || !del)
		return ;
	while (*lst)
	{
		p = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = p;
	}
}
