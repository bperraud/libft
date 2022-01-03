/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bperraud <bperraud@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:13:52 by bperraud          #+#    #+#             */
/*   Updated: 2021/12/01 20:30:06 by bperraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.a"
#include <string.h>
#include <stdio.h>

int	main(void)
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


	//ft_memset
	char st1[1000] = {0};
	char st2[1000] = {0};
	printf("ft_memset->%s\n", ft_memset(NULL, 'j', 0));
	printf("   memset->%s\n", memset(NULL, 'j', (0)));
	//ft_memset(NULL, 'j', 1);
	//memset(NULL, 'j', 1);
	printf("ft_memset->%s\n", ft_memset(st1, 'j', 0));
	printf("   memset->%s\n", memset(st2, 'j', (0)));
	printf("ft_memset->%s\n", ft_memset(st1, 'j', 2));
	printf("   memset->%s\n", memset(st2, 'j', 2));
	printf("ft_memset->%s\n", ft_memset(st1, '\0', 1000));
	printf("   memset->%s\n", memset(st2, '\0', 1000));

	//ft_bzero
	char ds[1];
	//ft_bzero(NULL, 0);
	//bzero(NULL, (0));
	//ft_bzero(NULL, 1);
	//bzero(NULL, (1));
	ft_bzero(ds, 0);
	bzero(ds, (0));
	ft_bzero(ds, 10);
	bzero(ds, (10));

	char dst[50] = "Je ne suis";
	char dst1[20] = {0};
	char dst2[20] = {0};
	char dst3[20] = {0};
	char dst4[20] = {0};
	char dst5[20] = {0};
	char dst6[20] = {0};
	char *str = "Salut comment ça va ?";
	printf("ft_memcpy->%s\n", ft_memcpy(dst2, str, 20));
	printf("   memcpy->%s\n", memcpy(dst2, str, 20));
	printf("ft_memcpy->%s\n", ft_memcpy(dst3, str, 0));
	printf("   memcpy->%s\n", memcpy(dst4, str, 0));
	//ft_memcpy(dst2, NULL, 20);
	//memcpy(dst3, NULL, 20);
	printf("ft_memcpy->%s\n", ft_memcpy(dst5, NULL, 0));
	printf("   memcpy->%s\n", memcpy(dst6, NULL, 0));
	//ft_memcpy(NULL, str, 20);
	//memcpy(NULL, str, 20);
	printf("ft_memcpy->%s\n", ft_memcpy(NULL, str, 0));
	printf("   memcpy->%s\n", memcpy(NULL, str, 0));
	printf("ft_memcpy->%s\n", ft_memcpy(NULL, NULL, 20));
	printf("   memcpy->%s\n", memcpy(NULL, NULL, 20));
	printf("ft_memcpy->%s\n", ft_memcpy(NULL, NULL, 0));
	printf("   memcpy->%s\n", memcpy(NULL, NULL, 0));

	//ft_strchr
	//ft_strchr(NULL, 'l');
	//strchr(NULL, 'l');
	printf("ft_strchr->%s\n", ft_strchr("", 'l'));
	printf("   strchr->%s\n", strchr("", 'l'));
	printf("ft_strchr->%s\n", ft_strchr("Are you somewhere about there", 'l'));
	printf("   strchr->%s\n", strchr("Are you somewhere about there", 'l'));
	printf("ft_strchr->%s\n", ft_strchr("                             ", ' '));
	printf("   strchr->%s\n", strchr("                             ", ' '));
	printf("ft_strchr->%s\n", ft_strchr("", '\0'));
	printf("   strchr->%s\n", strchr("", '\0'));
	printf("ft_strchr->%s\n", ft_strchr("\0cutness", '\0'));
	printf("   strchr->%s\n", strchr("\0cutness", '\0'));

	//ft_strncmp
	printf("ft_strncmp->%d\n", ft_strncmp("test", "tr", 10000));
	printf("   strncmp->%d\n", strncmp("test", "tr", 10000));
	printf("ft_strncmp->%d\n", ft_strncmp("", "true fact", 4));
	printf("   strncmp->%d\n", strncmp("", "true fact", 4));
	printf("ft_strncmp->%d\n", ft_strncmp("test", "", 4));
	printf("   strncmp->%d\n", strncmp("test", "", 4));
	//ft_strncmp(NULL, "true fact", 4);
	//strncmp(NULL, "true fact", 4);
	printf("ft_strncmp->%d\n", ft_strncmp(NULL, "tr", 0));
	printf("   strncmp->%d\n", strncmp(NULL, "tr", 0));
	printf("ft_strncmp->%d\n", ft_strncmp("test", NULL, 0));
	printf("   strncmp->%d\n", strncmp("test", NULL, 0));
	printf("ft_strncmp->%d\n", ft_strncmp(NULL, NULL, 0));
	printf("   strncmp->%d\n", strncmp(NULL, NULL, 0));

	//ft_strtrim.c
	printf("ft_strtrim->%s\n", ft_strtrim("   Hello!     ", " "));
	printf("ft_strtrim->%s\n", ft_strtrim("! !  !  ", " !"));
	printf("ft_strtrim->%s\n", ft_strtrim("! ca va ! toi?  !", " !"));

	//printf("ft_strtrim->%s\n", ft_strtrim(NULL, " !"));

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

	/*
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
	*/

	//ft_toupper
	printf("ft_toupper->%c\n", ft_toupper('c'));
	printf("ft_toupper->%c\n", ft_toupper('-'));
	//ft_tolower
	printf("ft_tolower->%c\n", ft_tolower('A'));
	printf("ft_tolower->%c\n", ft_tolower('z'));
	//ft_isdigit
	printf("ft_isdigit->%i\n", ft_isdigit('c'));
	printf("ft_isdigit->%i\n", ft_isdigit('0'));
	//ft_isalnum
	printf("ft_isalnum->%i\n", ft_isalnum('c'));
	printf("ft_isalnum->%i\n", ft_isalnum('8'));
	printf("ft_isalnum->%i\n", ft_isalnum(')'));

}
