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
	//write(fd, ft_itoa(n), ft_nbrchar(n));
	int		size;
	int		neg;
	char c;

	neg = 0;
	if (n < 0)
		neg = 1;
	size = ft_nbrchar(n);
	// while (size-- > neg)
	while (size--)
	{
		if (neg)
			c = -(n % 10) + '0';
		else
			c = (n % 10) + '0';
		write(fd, &c, 1);
		n /= 10;
	}
}
