/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:09:57 by jselway           #+#    #+#             */
/*   Updated: 2022/01/27 21:14:38 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

ft_lstdelone(t_list *lst, void (*del)(void *));
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
