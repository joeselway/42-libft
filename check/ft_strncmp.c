/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:23:44 by jselway           #+#    #+#             */
/*   Updated: 2022/01/22 17:28:15 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p1;

	p1 = s1;
	p2 = s2;
	i = 0;
	while (p1[i] && p2[i] && i < n)
	{
		if (p1[i] == p2[i])
			i++;
	}
	return (p1[i] - p2[i]);
}
