/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:03:33 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/04 18:21:09 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char				*ft_init(char const *s1, char const *set, int i)
{
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	return ((char *)&s1[i]);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*pt;
	size_t	size;
	int		i;

	if (!s1)
		return (NULL);
	i = 0;
	start = ft_init(s1, set, i);
	if ((i = ft_strlen(s1) - 1) != -1)
		while (i >= 0 && is_in_set(s1[i], set))
			i--;
	end = (char *)&s1[i];
	if (ft_strlen(start) == 0)
		size = 1;
	else if (!*s1 || end == start)
		size = 2;
	else
		size = end - start + 2;
	if (!(pt = malloc(sizeof(char) * size)))
		return (NULL);
	ft_strlcpy(pt, start, size);
	return (pt);
}
