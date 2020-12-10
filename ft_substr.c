/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 11:42:23 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/10 12:25:06 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*pt;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		if (!(pt = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		*pt = 0;
		return (pt);
	}
	if (len > s_len)
		len = s_len;
	if (!(pt = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (++i < len)
		pt[i] = s[start + i];
	pt[i] = '\0';
	return (pt);
}
