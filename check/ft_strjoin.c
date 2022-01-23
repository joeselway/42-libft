/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jselway <jselway@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 11:47:50 by jselway           #+#    #+#             */
/*   Updated: 2022/01/23 12:02:18 by jselway          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = malloc(sizeof(*s1) * (s1len + s2len));
	if (!str)
		return (NULL);
	i = 0;
	while (s1)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2)
	{
		str[s1len + i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
