/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:01:54 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/07 10:57:52 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*pt;

	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	pt = lst;
	return (pt);
}
