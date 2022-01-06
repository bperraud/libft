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

static int	ft_nbrdigit(int n)
{
	if (n < 10)
		return (1);
	return (1 + ft_nbrdigit(n / 10));
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0)
		write(fd, ft_itoa(n), ft_nbrdigit(n));
	else
		write(fd, ft_itoa(n), ft_nbrdigit(-n) + 1);
}
