/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:13:52 by bperraud          #+#    #+#             */
/*   Updated: 2021/12/18 14:42:59 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *found;
	const char *p;

	c = (unsigned char) c;
	/* when looking for \0 search for the first one (ajouter dans les tests)*/
	if (c == '\0')
		return ft_strchr(s, '\0');
	found = NULL;
	while ((p = ft_strchr(s, c)) != NULL)
	{
		found = p;
		s = p + 1;
	}
	return (char *)found;
}

/*
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i)
	{
		if (s[i] == c)
			return ((char *)s);
		i--;
	}
	return (NULL);
}
*/
