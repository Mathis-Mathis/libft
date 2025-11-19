/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:09:32 by mmousli           #+#    #+#             */
/*   Updated: 2025/11/19 13:43:46 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h>

int	main(void)
{
	t_list a, b, c;
	t_list new;

	a.content = "C";
	a.next = NULL;

	b.content = "B";
	b.next = &a;

	c.content = "A";
	c.next = &b;

	t_list *lst  = &c;

	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
	printf("%s\n", (char *)lst->next->next->content);


	printf("\n");
	new.content = "NEW";
	new.next = NULL;

	ft_lstadd_front(&lst, &new);
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
	printf("%s\n", (char *)lst->next->next->content);
	printf("%s\n", (char *)lst->next->next->next->content);
}*/
