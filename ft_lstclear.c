/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:45:51 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/07 10:58:22 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *pt;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		pt = *lst;
		*lst = pt->next;
		free(pt);
	}
	*lst = NULL;
}
