/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 02:42:51 by bperraud          #+#    #+#             */
/*   Updated: 2021/11/17 11:32:15 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	temp;

	if (!*little)
		return ((char *) big);
	while (*big && len)
	{
		if (*big == *little)
		{
			i = 1;
			temp = len;
			while (little[i] && big[i] == little[i] && temp)
			{
				i++;
				temp--;
			}
			if (!temp)
				return (0);
			if (!little[i])
				return ((char *) big);
		
		}
		big++;
		len--;
	}
	return (0);
}
