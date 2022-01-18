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

char	*ft_strnstr(const char *big, const char *needle, size_t len)
{
	size_t	i;
	size_t	temp;

	if (!*needle)
		return ((char *) big);
	while (*haystack && len)
	{
		if (*haystack == *needle)
		{
			i = 1;
			temp = len;
			while (needle[i] && big[i] == needle[i] && temp)
			{
				i++;
				temp--;
			}
			if (!temp)
				return (0);
			if (!needle[i])
				return ((char *) big);
		}
		big++;
		len--;
	}
	return (0);
}
