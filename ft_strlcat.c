/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:45:11 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/02 18:41:44 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;
	size_t	start;
	size_t	i;

	src_size = ft_strlen(src);
	if (dstsize == 0)
		return (src_size);
	start = 0;
	while (start < dstsize && dst[start])
		start++;
	if (dstsize <= start)
		return (dstsize + src_size);
	i = 0;
	while (dstsize && (--dstsize - start) && src[i])
	{
		dst[start + i] = src[i];
		i++;
	}
	dst[start + i] = '\0';
	return (start + src_size);
}
