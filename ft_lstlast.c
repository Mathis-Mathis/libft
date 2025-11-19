/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:56:58 by mmousli           #+#    #+#             */
/*   Updated: 2025/11/19 15:20:46 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*#include <stdio.h>
int	main(void)
{
	t_list a;
	t_list b;
	t_list c;

	a.content = "A";
	b.content = "b";
	c.content = "c";

	a.next = &b;
	b.next = &c;
	c.next = NULL;

	t_list *lst = &a;

	t_list *last_node = ft_lstlast(lst);
	printf("%s", (char *)last_node->content);
}*/
