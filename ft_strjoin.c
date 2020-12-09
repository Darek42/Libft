/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 12:43:24 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/04 17:56:51 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size_s1;
	size_t	size_s2;
	char	*pt;
	size_t	i;

	if (!s1)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	if (!(pt = (char *)malloc(sizeof(char) * (size_s1 + size_s2 + 1))))
		return (0);
	i = 0;
	while (s1[i])
	{
		pt[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		pt[size_s1 + i] = s2[i];
		i++;
	}
	pt[size_s1 + i] = '\0';
	return (pt);
}
