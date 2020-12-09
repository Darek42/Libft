/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:37:20 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/07 10:35:23 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft(long n2, char *pt, int negatif, int len)
{
	int		i;

	i = len - 1;
	while (i >= 0)
	{
		if (i == 0 && negatif)
			pt[0] = '-';
		else
		{
			if (i == len)
				pt[i] = n2 / 10 + '0';
			else
				pt[i] = n2 % 10 + '0';
			n2 = n2 / 10;
		}
		i--;
	}
	pt[len] = '\0';
	return (pt);
}

char	*ft_itoa(int n)
{
	char	*pt;
	long	n2;
	long	n3;
	int		len;
	int		negatif;

	n2 = n;
	len = 1;
	if (n >= 0)
		negatif = 0;
	else
	{
		negatif = 1;
		n2 = -1 * (long)n;
		len = 2;
	}
	n3 = n2;
	while (n3 >= 10)
	{
		n3 = n3 / 10;
		len++;
	}
	if (!(pt = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	return (ft(n2, pt, negatif, len));
}
