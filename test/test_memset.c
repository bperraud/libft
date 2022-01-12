
#include "../libft.h"
#include <stdio.h>
#include <string.h>

void test_memset()
{
	char dst1[1000] = {0};
	char dst2[1000] = {0};

	printf("ft_memset->%s\n", ft_memset(NULL, 'j', 0));
	printf("   memset->%s\n", memset(NULL, 'j', (0)));
	//ft_memset(NULL, 'j', 1);
	//memset(NULL, 'j', 1);
	printf("ft_memset->%s\n", ft_memset(dst1, 'j', 0));
	printf("   memset->%s\n", memset(dst2, 'j', (0)));
	printf("ft_memset->%s\n", ft_memset(dst1, 'j', 2));
	printf("   memset->%s\n", memset(dst2, 'j', 2));
	printf("ft_memset->%s\n", ft_memset(dst1, '\0', 1000));
	printf("   memset->%s\n", memset(dst2, '\0', 1000));
}
