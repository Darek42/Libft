/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:26:42 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/02 18:08:46 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*c_finded;

	c_finded = NULL;
	i = -1;
	while (s[++i])
		if (s[i] == (char)c)
			c_finded = (char *)&s[i];
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (c_finded);
}
