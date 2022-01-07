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

#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;
	size_t 	i;

	i = 0;
	size = ft_strlen(s);
	if (start + len > size)
		len = size - start;
	if (start >= size)
		return (ft_strdup(""));
	if (start < size)
	{
		substr = malloc((len + 1) * sizeof(char));
		if (!substr)
			return (NULL);
		s += start;
		while (i < len)
		{
			substr[i] = s[i];
			i++;
		}
		substr[i] = '\0';
		return (substr);
	}
	return (NULL);
}
