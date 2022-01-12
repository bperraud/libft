#include "proto.h"
#include "../libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

int	main()
{

	test_lst();

	printf("strlen %lu\n", strlen("John\0ny"));
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
	test_strncmp();
	printf("\nAtoi\n");
	test_atoi();
	printf("\nBzero\n");
	test_bzero();
	printf("\nMemchr\n");
	test_memchr();
	printf("\nMemcmp\n");
	test_memcmp();
	printf("\nMemcpy\n");
	test_memcpy();
	//printf("\nMemmove\n");
	//test_memmove();
	printf("\nMemset\n");
	test_memset();
	printf("\nStrchr\n");
	test_strchr();
	printf("\nStrdup\n");
	test_strdup();
	printf("\nStrlcat\n");
	test_strlcat();
	printf("\nStrlcpy\n");
	test_strlcpy();
	printf("\nStrlen\n");
	test_strlen();
	printf("\nStrnstr\n");
	test_strnstr();
	printf("\nStrrchr\n");
	//test_strrchr();

	printf("\nSubstr\n");
	test_substr();
}
