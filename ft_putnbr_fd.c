/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:04:03 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/07 10:09:11 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_calc(long n2, char *pt, int negatif, int len)
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

void	ft_out(char *str, int fd)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	pt[12];
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
	ft_out(ft_calc(n2, pt, negatif, len), fd);
}
