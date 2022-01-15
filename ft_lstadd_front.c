/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:35:07 by bperraud          #+#    #+#             */
/*   Updated: 2022/01/15 20:35:11 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list	*list;

	if (!*alst)
	{
		*alst = new;
		return;
	}
	list = new;
	while (list->next)
		list = list->next;
	list->next = *alst;
	*alst = list;
}
