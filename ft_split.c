/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:55:47 by bperraud          #+#    #+#             */
/*   Updated: 2022/01/03 13:07:58 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_sep(char *c, char *charset)
{
	while (*charset)
	{
		if (*c == *charset)
			return (1);
		charset ++;
	}
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (*str && !ft_is_sep(str, charset))
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_wordcount(char *str, char *charset)
{
	int	nbr_word;

	nbr_word = 0;
	while (*str)
	{
		while (*str && ft_is_sep(str, charset))
			str++;
		while (*str && !ft_is_sep(str, charset))
			str++;
		nbr_word++;
	}
	if (ft_is_sep(str - 1, charset))
		nbr_word--;
	return (nbr_word);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		nbr_word;
	int		i;
	int		word_len;

	nbr_word = ft_wordcount(str, charset);
	dest = malloc((nbr_word + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < nbr_word)
	{
		while (*str && ft_is_sep(str, charset))
			str++;
		word_len = ft_wordlen(str, charset);
		dest[i] = malloc((word_len + 1) * sizeof(char));
		if (!(*dest))
			return (NULL);
		ft_strncpy(dest[i], str, word_len);
		str += word_len;
		i++;
	}
	dest[nbr_word] = 0;
	return (dest);
}
