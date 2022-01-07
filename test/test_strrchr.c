

#include "../libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void main_strrchr()
{
	char *str;
	size_t loop = 0;
	if (!(str = malloc(sizeof(char) * 3000000001)))
		return ;
	while (loop < 10)
		str[loop++] = 'j';
	while (loop < 2999999990)
		str[loop++] = 'o';
	while (loop < 3000000000)
		str[loop++] = 'o';
	str[loop] = 0;
	printf("ft_strrchr->%s\n", ft_strrchr("", 'l'));
	printf("   strrchr->%s\n", strrchr("", 'l'));
	//ft_strrchr(NULL, 'l');
	//strrchr(NULL, 'l');
	printf("ft_strrchr->%s\n", ft_strrchr("Just are you dead Joey ?", 'l'));
	printf("   strrchr->%s\n", strrchr("Just are you dead Joey", 'l'));
	printf("ft_strrchr->%s\n", ft_strrchr("                    ", ' '));
	printf("   strrchr->%s\n", strrchr("                    ", ' '));
	printf("ft_strrchr->%s\n", ft_strrchr("\0 Johnny", '\0'));
	printf("   strrchr->%s\n", strrchr("\0 Johnny", '\0'));

	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *d1 = strrchr(src, '\0');
	char *d2 = ft_strrchr(src, '\0');
	printf("ft_strrchr->%s\n", d1);
	printf("   strrchr->%s\n", d2);

	//printf("ft_strrchr->%s\n", ft_strrchr(str, 'j'));
	//printf("   strrchr->%s\n", strrchr(str, 'j'));
	free(str);
}
