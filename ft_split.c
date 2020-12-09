/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:47:02 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/09 13:41:23 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_clear(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

size_t	ft_nbstrs(char const *s, char c)
{
	size_t	nbstrs;
	size_t	i;

	if (!s[0])
		return (0);
	i = 0;
	nbstrs = 0;
	while (s[i] && (s[i] == c))
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nbstrs++;
			while (s[i] && (s[i] == c))
				i++;
			continue ;
		}
		i++;
	}
	if (i > 0 && (s[i - 1] != c))
		nbstrs++;
	return (nbstrs);
}

void	ft_nextstr(char **nextstr, size_t *nextlen, char c)
{
	size_t i;

	*nextstr += *nextlen;
	*nextlen = 0;
	i = 0;
	while ((*nextstr)[i] && ((*nextstr)[i] == c))
		i++;
	*nextstr = *nextstr + i;
	i = 0;
	while ((*nextstr)[i] && ((*nextstr)[i] != c))
	{
		i++;
		(*nextlen)++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*nextstr;
	size_t	nextlen;
	size_t	nbstrs;
	size_t	i;

	if (!s)
		return (NULL);
	nbstrs = ft_nbstrs(s, c);
	if (!(tab = malloc(sizeof(char *) * (nbstrs + 1))))
		return (NULL);
	i = 0;
	nextstr = (char *)s;
	nextlen = 0;
	while (i < nbstrs)
	{
		ft_nextstr(&nextstr, &nextlen, c);
		if (!(tab[i] = malloc(sizeof(char) * (nextlen + 1))))
			return (ft_clear(tab));
		ft_strlcpy(tab[i], nextstr, nextlen + 1);
		tab[i][nextlen] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
