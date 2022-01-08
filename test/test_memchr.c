

#include "../libft.h"
#include "stdio.h"
#include "string.h"

void main_memchr()
{
	printf("ft_memchr->%s\n", ft_memchr("", 'p', 2));
	//printf("   memchr->%s\n", memchr("", 'p', 2));
	printf("ft_memchr->%s\n", ft_memchr("Just being me is a whole problem", 'p', 2));
	printf("   memchr->%s\n", memchr("Just being me is a whole problem", 'p', 2));
	printf("ft_memchr->%s\n", ft_memchr("Just being me is a whole problem", 'p', 100));
	printf("   memchr->%s\n", memchr("Just being me is a whole problem", 'p', 100));
	printf("ft_memchr->%s\n", ft_memchr("Just being me is a whole problem", '\0', 2));
	printf("   memchr->%s\n", memchr("Just being me is a whole problem", '\0', 2));
	printf("ft_memchr->%s\n", ft_memchr("Just being me is a whole problem", '\0', 100));
	printf("   memchr->%s\n", memchr("Just being me is a whole problem", '\0', 100));
	printf("ft_memchr->%s\n", ft_memchr("", 'p', 0));
	printf("   memchr->%s\n", memchr("", 'p', 0));
	printf("ft_memchr->%s\n", ft_memchr("Just being me is a whole problem", 'p', 0));
	printf("   memchr->%s\n", memchr("Just being me is a whole problem", 'p', 0));
	printf("ft_memchr->%s\n", ft_memchr("Just being me is a whole problem", '\0', 0));
	printf("   memchr->%s\n", memchr("Just being me is a whole problem", '\0', 0));
	printf("ft_memchr->%s\n", ft_memchr(NULL, 'p', 0));
	printf("   memchr->%s\n", memchr(NULL, 'p', 0));
	printf("ft_memchr->%s\n", ft_memchr(NULL, '\0', 0));
	printf("   memchr->%s\n", memchr(NULL, '\0', 0));



	//ft_memchr(NULL, 'p', 1);
	//memchr(NULL, 'p', 1);;
	//ft_memchr(NULL, '\0', 1);
	//memchr(NULL, '\0', 1);
}