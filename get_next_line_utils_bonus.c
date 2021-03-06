/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:32:43 by bperraud          #+#    #+#             */
/*   Updated: 2022/02/06 15:32:43 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	*ft_memchr(const void *s, int c, long n)
{
	const unsigned char	*cs;
	unsigned char		uc;

	cs = s;
	uc = c;
	while (n && *cs != uc)
	{
		n--;
		cs++;
	}
	if (n)
		return ((void *) cs);
	else
		return (NULL);
}

char	*ft_strncpy(char *dest, const char *src, long n)
{
	unsigned int	i;

	i = 0;
	if (src)
	{
		while (src[i] != '\0' && i < n)
		{
			dest[i] = src[i];
			i++;
		}
		while (i <= n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	lens1;
	size_t	lens2;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = malloc((lens1 + lens2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strncpy(str, s1, lens1);
	ft_strncpy(str + lens1, s2, ft_strlen(s2));
	return (str);
}

char	**ft_split(char const *str, const char c)
{
	char	**dest;
	int		i;

	i = 0;
	dest = malloc(3 * sizeof(char *));
	if (!dest)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
			dest[0] = malloc((i + 1) * sizeof(char));
			dest[1] = malloc((BUFFER_SIZE - i + 1) * sizeof(char));
			if (!dest[0] || !dest[1])
				return (NULL);
			ft_strncpy(dest[0], str, i);
			ft_strncpy(dest[1], str + i, BUFFER_SIZE - i);
			break ;
		}
		i++;
	}
	dest[2] = NULL;
	return (dest);
}
