#include <stdio.h>
#include "../libft.h"
#include <string.h>

void main_bzero()
{
	char dst[1];
	ft_bzero(NULL, 0);
	bzero(NULL, (0));
	//ft_bzero(NULL, 1);
	//bzero(NULL, (1));
	ft_bzero(dst, 0);
	bzero(dst, (0));
	//ft_bzero(dst, 10);
	//bzero(dst, (10));
}
