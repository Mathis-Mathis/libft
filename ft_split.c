/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:20:33 by mmousli           #+#    #+#             */
/*   Updated: 2025/11/13 12:30:08 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
			{
				i++;
			}
		}
		i++;
	}
	return (count);
}



#include <stdio.h>
int	main(void)
{
	printf("%d", (ft_count_words("Je suis une phrase", ' ')));

	return (0);
}
