

#include "../libft.h"
#include <string.h>
#include <stdio.h>

void test_strnstr()
{
	//printf("ft_strnstr->%s\n", ft_strnstr("trucbizarre", "lil", 80000));
	//printf("   strnstr->%s\n", strnstr("trucbizarre", "lil", 80000));
	//ft_strnstr(NULL, "lil", 10);
	//strnstr(NULL, "lil", 10);
	//printf("ft_strnstr->%s\n", ft_strnstr(NULL, "lil", 0));
	//printf("   strnstr->%s\n", strnstr(NULL, "lil", 0));
	//ft_strnstr("trucbizarre", NULL, 10);
	//strnstr("trucbizarre", NULL, 10);
	//ft_strnstr("trucbizarre", NULL, 0);
	//strnstr("trucbizarre", NULL, 0);
	//ft_strnstr(NULL, NULL, 0);
	//strnstr(NULL, NULL, 0);
	//printf("ft_strnstr->%s\n", ft_strnstr("test", "", 4));
	//printf("   strnstr->%s\n", strnstr("test", "", 4));
	//printf("ft_strnstr->%s\n", ft_strnstr("", "", 4));
	//printf("   strnstr->%s\n", strnstr("", "", 4));
	//printf("ft_strnstr->%s\n", ft_strnstr("", "Johnny is tired of having segfault from \"somewhere\"", 50));
	//printf("   strnstr->%s\n", strnstr("", "Johnny is tired of having segfault from \"somewhere\"", 50));
	//printf("ft_strnstr->%s\n", ft_strnstr("babababe", "bababe", 8));
	//printf("   strnstr->%s\n", strnstr("babababe", "bababe", 8));
	char * big = "123456789";
	char * little = "9";
	size_t max = 8;

	//char *s1 = strnstr(big, little, max);
	char *s2 = ft_strnstr(big, little, max);
	//if (s1 == s2)
	printf("%s", s2);
}
