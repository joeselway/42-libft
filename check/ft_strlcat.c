/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:56:40 by jselway           #+#    #+#             */
/*   Updated: 2022/02/02 19:18:07 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	if (dstsize == 0)
		return (dstlen + ft_strlen(src));
	i = 0;
	while (src[i] && i < (dstsize - dstlen - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstsize && dstsize < dstlen)
		dst[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}	
