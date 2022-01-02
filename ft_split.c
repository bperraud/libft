/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 02:42:51 by bperraud          #+#    #+#             */
/*   Updated: 2021/11/17 11:32:15 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int		ft_wordlen(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

int		ft_wordcount(const char *str, char c)
{
	int i;
	int w;

	w = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		i = ft_wordlen(str, c);
		str += i;
		if (i)
			w++;
	}
	return (w);
}

char	*ft_wordcpy(const char *src, int n)
{
	char	*dest;

	if (!(dest = malloc((n + 1) * sizeof(char))))
		return (NULL);
	dest[n] = '\0';
	while (n--)
		dest[n] = src[n];
	return (dest);
}

char	**ft_split(const char *str, char c)
{
	char	**t;
	int		size;
	int		i;
	int		n;

	size = ft_wordcount(str, c);
	if (!(t = malloc((size + 1) * sizeof(char*))))
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*str && *str == c)
			str++;
		n = ft_wordlen(str, c);
		if (!(t[i] = ft_wordcpy(str, n)))
			return (NULL);
		str += n;
	}
	t[size] = 0;
	return (t);
}
