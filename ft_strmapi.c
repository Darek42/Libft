/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 11:43:10 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/07 10:31:11 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*pt;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	if (!(pt = malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		pt[i] = f(i, s[i]);
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
