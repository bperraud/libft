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

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	uc;
	unsigned char	*ub;

	uc = c;
	ub = b;
	while (len--)
		*ub++ = uc;
	return (b);
}
/* using unsigned char for BYTE
 * if char is signed, then the behaviour will be implementation defined if the int cannot fit into the char
 * char still works in this case but will send a warning
 * unsigned char and char only differ when used as arithmetic operands
 */
