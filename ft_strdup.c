/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 10:48:06 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/07 10:23:24 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*pt;
	int		i;

	i = 0;
	size = 0;
	pt = NULL;
	while (s1[i++])
		size++;
	if (!(pt = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	i = 0;
	while (s1[i])
	{
		pt[i] = s1[i];
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
