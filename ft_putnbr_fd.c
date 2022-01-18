/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:13:52 by bperraud          #+#    #+#             */
/*   Updated: 2021/12/18 14:42:59 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nbrchar(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		while (n < -9)
		{
			n /= 10;
			i++;
		}
	}
	else
	{
		while (n > 9)
		{
			n /= 10;
			i++;
		}
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		size;
	int		neg;
	int		i;
	char	str[sizeof (int) * 8];

	neg = 0;
	if (n < 0)
	{
		neg = 1;
		str[0] = '-';
	}
	size = ft_nbrchar(n);
	str[size] = '\0';
	while (size-- > neg)
	{
		if (neg)
			str[size] = -(n % 10) + '0';
		else
			str[size] = (n % 10) + '0';
		n /= 10;
	}
	i = 0;
	while (str[i])
		write(fd, &str[i++], 1);
}
