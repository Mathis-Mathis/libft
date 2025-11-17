/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 15:49:46 by mmousli           #+#    #+#             */
/*   Updated: 2025/11/17 14:55:07 by mmousli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	res = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*char	ft_upper_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c>= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}


#include <stdio.h>
int	main(void)
{
	char const *s = "Salut je suis une string";
	char *res = ft_strmapi(s, ft_upper_even);
	printf("%s\n", res);
}*/
