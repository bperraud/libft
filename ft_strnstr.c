/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:36:01 by bperraud          #+#    #+#             */
/*   Updated: 2022/01/15 20:36:03 by bperraud         ###   ########.fr       */
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
