/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalendi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 17:19:17 by lcalendi          #+#    #+#             */
/*   Updated: 2019/11/12 13:05:37 by jherelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"
#include "../libft.h"
#include <stdio.h>
#include <fcntl.h>

int	main()
{
	int fd = open("empty.txt", O_WRONLY);

	ft_putnbr_fd(-2147483648, fd);

	//ft_putstr_fd(fd, "");
	printf("%s\n", ft_itoa(-2147483648));
	//ft_itoa.c


	printf("ft_itoa->%s\n", ft_itoa(125614));
	printf("ft_itoa->%s\n", ft_itoa(-125614));
	printf("ft_itoa->%s\n", ft_itoa(0));
	printf("ft_itoa->%s\n", ft_itoa(-2147483648));
	//printf("	itoa->%s\n", itoa(100));

	//ft_atoi.c
	printf("ft_atoi->%d\n", ft_atoi("21474836489"));
	printf("   atoi->%d\n", atoi("2147483648"));
	//printf("ft_atoi->%d\n", ft_atoi("-2147483649"));
	//printf("   atoi->%d\n", atoi("-2147483649"));


	printf("\n Strncmp\n");
	main_strncmp();
	printf("\nAtoi\n");
	main_atoi();
	printf("\nBzero\n");
	main_bzero();
	printf("\nMemchr\n");
	main_memchr();
	printf("\nMemcmp\n");
	main_memcmp();
	printf("\nMemcpy\n");
	main_memcpy();
	//printf("\nMemmove\n");
	//main_memmove();
	printf("\nMemset\n");
	main_memset();
	printf("\nStrchr\n");
	main_strchr();
	printf("\nStrdup\n");
	main_strdup();
	printf("\nStrlcat\n");
	main_strlcat();
	printf("\nStrlcpy\n");
	main_strlcpy();
	printf("\nStrlen\n");
	main_strlen();
	printf("\nStrnstr\n");
	main_strnstr();
	printf("\nStrrchr\n");
	main_strrchr();


}
