/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:38:07 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/07 10:13:38 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*pt;
	unsigned long	i;

	if (!(pt = (char *)malloc(sizeof(char) * count * size)))
		return (0);
	else
	{
		i = 0;
		while (i < count * size)
			pt[i++] = 0;
		return (pt);
	}
}
