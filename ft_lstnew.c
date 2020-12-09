/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozacze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:17:54 by dkozacze          #+#    #+#             */
/*   Updated: 2020/12/07 11:01:45 by dkozacze         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pt;

	if (!(pt = malloc(sizeof(t_list))))
		return (NULL);
	pt->content = content;
	pt->next = NULL;
	return (pt);
}
