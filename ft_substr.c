/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:13:52 by bperraud          #+#    #+#             */
/*   Updated: 2021/12/18 14:42:59 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t t)
{
	char	*substr;
	int		size;

	size = ft_strlen(s);
	if (t > size)
		t = size + 1;
	if (start < t)
	{
		substr = malloc((t - start) * sizeof(char));
		s += start;
		while (t != start)
		{
			*substr++ = *s++;
			t--;
		}
		return (substr);
	}
	return (NULL);
}
