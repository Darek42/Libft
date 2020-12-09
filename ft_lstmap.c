/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:19:48 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/07 11:02:46 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*pt_newlst;
	t_list	*pt_newelmnt;

	if (!f)
		return (NULL);
	pt_newlst = NULL;
	while (lst)
	{
		if (!(pt_newelmnt = ft_lstnew(f(lst->content))))
		{
			if (!del)
			{
				ft_lstclear(&pt_newlst, del);
				return (NULL);
			}
		}
		ft_lstadd_back(&pt_newlst, pt_newelmnt);
		lst = lst->next;
	}
	return (pt_newlst);
}
