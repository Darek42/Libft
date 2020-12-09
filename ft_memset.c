/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 01:44:29 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/07 10:32:03 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*pt;

	pt = (char *)b;
	while (len)
	{
		*pt = (unsigned char)c;
		pt++;
		len--;
	}
	return (b);
}
