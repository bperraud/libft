
#include "../libft.h"
#include <string.h>
#include <stdio.h>

void	main_memcmp()
{
	printf("ft_memcmp->%d\n", ft_memcmp(NULL, NULL, 0));
	printf("   memcmp->%d\n", memcmp(NULL, NULL, 0));
	//printf("   memcmp->%d\n",ft_memcmp(NULL, NULL, 1));
	//printf("   memcmp->%d\n",memcmp(NULL, NULL, 1));
	//printf("   memcmp->%d\n",ft_memcmp(NULL, "", 1));
	//memcmp(NULL, "", 1);
	//ft_memcmp(NULL, "", 1);
	//memcmp("", NULL, 1);
	//ft_memcmp("", NULL, 1);
	printf("ft_memcmp->%d\n", ft_memcmp("", "", 1000));
	printf("   memcmp->%d\n", memcmp("", "", 1000));
	printf("ft_memcmp->%d\n", ft_memcmp("Am I very happy", "Am I very Happy", 11));
	printf("ft_memcmp->%d\n", ft_memcmp("Am I very happy", "Am I very Happy", 11));
	//ft_memcmp("Just not blank", "Just not blank", 100000);
	printf("   ft_memcmp->%d\n", ft_memcmp("Just not blank", "Just not blank", 10000));
	printf("   memcmp->%d\n", memcmp("Just not blank", "Just not blank", 10000));
}
