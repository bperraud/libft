/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 02:42:51 by bperraud          #+#    #+#             */
/*   Updated: 2021/11/17 11:32:15 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_rec_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;

	list = *lst;
	if (!list->next)
	{
		(del)(*lst);
		free(*lst);
		*lst = NULL;
	}
	else
	{
		ft_rec_lstclear(&list->next, (del));
	}
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	ft_rec_lstclear(lst, del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
