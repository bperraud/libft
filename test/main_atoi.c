/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalendi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:20:29 by lcalendi          #+#    #+#             */
/*   Updated: 2019/11/12 13:10:14 by jherelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"
#include <string.h>

void main_atoi()
{
	//ft_atoi(NULL);
	//atoi(NULL);
	printf("ft_atoi->%d\n", ft_atoi(""));
	printf("   atoi->%d\n", atoi(""));
	printf("ft_atoi->%d\n", ft_atoi("                                                                            "));
	printf("   atoi->%d\n", atoi("                                                                             "));
	printf("ft_atoi->%d\n", ft_atoi("99999999999999999999999999999999999999999999999999999999999999999999999"));
	printf("   atoi->%d\n", atoi("999999999999999999999999999999999999999999999999999999999999999999999999"));
	printf("ft_atoi->%d\n", ft_atoi("--------------------------------------------------------"));
	printf("   atoi->%d\n", atoi("---------------------------------------------------------"));
	printf("ft_atoi->%d\n", ft_atoi("      + 5668412"));
	printf("   atoi->%d\n", atoi("      + 5668412"));
}
