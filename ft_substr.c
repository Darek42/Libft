/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 11:42:23 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/04 18:24:10 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*pt;
	unsigned int	s_len;

	s_len = 0;
	if (!s)
		return (NULL);
	while (s[s_len])
		s_len++;
	if (start > s_len)
	{
		if (!(pt = (char *)malloc(sizeof(char) * 1)))
			return (0);
		*pt = 0;
		return (pt);
	}
	if (!(pt = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	i = -1;
	while (++i < len)
		pt[i] = s[start + i];
	pt[i] = '\0';
	return (pt);
}
