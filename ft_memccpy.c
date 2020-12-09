/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:14:35 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/02 13:44:16 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (i < n && s[i] != (unsigned char)c)
	{
		d[i] = s[i];
		i++;
	}
	if (i == n)
		return (NULL);
	else
	{
		d[i] = s[i];
		i++;
		return (&d[i]);
	}
}
