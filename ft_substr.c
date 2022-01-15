/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:36:27 by bperraud          #+#    #+#             */
/*   Updated: 2022/01/15 20:36:30 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
