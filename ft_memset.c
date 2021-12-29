/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:13:52 by bperraud          #+#    #+#             */
/*   Updated: 2021/12/18 14:42:59 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*us;

	uc = c;
	us = s;
	while (n--)
		*us++ = uc;
	return (s);
}
/* using unsigned char for BYTE
 * if char is signed, then the behaviour will be implementation defined if the int cannot fit into the char
 * char still works in this case but will send a warning
 * unsigned char and char only differe when used as arithmetic operands
 */
