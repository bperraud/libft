/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:34:35 by bperraud          #+#    #+#             */
/*   Updated: 2022/01/15 20:34:38 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rec_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;

	list = *lst;
	if (!list->next)
	{
		ft_lstdelone(*lst, del);
		*lst = NULL;
	}
	else
		ft_rec_lstclear(&list->next, (del));
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	ft_rec_lstclear(lst, del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
