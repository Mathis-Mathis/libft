/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:47:57 by mmousli           #+#    #+#             */
/*   Updated: 2025/11/21 14:15:23 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
	t_list *a = ft_lstnew("je suis A");
	t_list *b = ft_lstnew("je suis B");
	t_list *c = ft_lstnew("je suis C");
	t_list *d = ft_lstnew("je suis D");

	ft_lstadd_front(&a, b);
	ft_lstadd_front(&a, c);
	ft_lstadd_front(&a, d);

	int	size = ft_lstsize(a);
	printf("%d\n", size);
}*/
