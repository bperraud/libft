#include "../libft.h"
#include "stdio.h"
#include "string.h"

void test_substr(void)
{

	char *str = "i just want this part ###";
	size_t size = 20;
	//char *ret = ft_substr(str, 5, size);

	printf("ft_substr->%s\n", ft_substr(str, 0, 10));
	printf("ft_substr->%s\n", ft_substr(str, 30, 20));

	//printf("   memchr->%s\n", memchr("", 'p', 2));


}
