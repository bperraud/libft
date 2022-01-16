/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:44:10 by bperraud          #+#    #+#             */
/*   Updated: 2022/01/16 00:36:14 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*plist;
	t_list	*list;

	plist = NULL;
	if (lst && f && del)
	{
		while (lst->next)
		{
			list = ft_lstnew((*f)(lst->content));
			if (!list)
			{
				ft_lstadd_back(&plist, list);
				lst = lst->next;
			}
			else
				ft_lstclear(&plist, del);
		}
		return (plist);
	}
	else 
		return (NULL); 
}
