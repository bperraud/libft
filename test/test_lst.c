#include "../libft.h"
#include "stdio.h"
#include "string.h"

void test_lst()
{
	t_list *l = ((void*)0);
	t_list *p = ft_lstnew(strdup("FIRST"));
	t_list *n = ft_lstnew(strdup("OK"));

	ft_lstadd_back(&l, n);
	if (l == n && !strcmp(l->content, "OK")){
		free(l->next);
		free(l);
		printf("add back null\n");
	}

	ft_lstadd_front(&n, p);
	if (!strcmp(n->content, "FIRST")){
		free(n->next);
		free(n);
		printf("bon");
	}

}
