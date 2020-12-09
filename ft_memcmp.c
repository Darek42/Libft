/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 20:21:00 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/02 15:41:20 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				delta;
	unsigned char	*s1uc;
	unsigned char	*s2uc;

	i = 0;
	s1uc = (unsigned char *)s1;
	s2uc = (unsigned char *)s2;
	while (i < n)
	{
		delta = s1uc[i] - s2uc[i];
		if (delta)
			return (delta);
		i++;
	}
	return (0);
}
