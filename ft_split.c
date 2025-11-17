/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmousli <mmousli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:20:33 by mmousli           #+#    #+#             */
/*   Updated: 2025/11/17 13:34:57 by mmousli          ###   ########.fr       */
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
		else
			i++;
	}
	return (count);
}

static char	*ft_copy_words(char const *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	word = malloc(i + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, s, i);
	word[i] = '\0';
	return (word);
}

static char	**ft_free_malloc( char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	**ft_tousofsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			tab[j] = ft_copy_words(&s[i], c);
			if (!tab[j])
				return (ft_free_malloc(tab));
			j++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_tousofsplit(s, c));
}

/*#include <stdio.h>
int	main(void)
{
	char	**tab;
	char	**tab2;
	char	**tab3;
	char	**tab4;
	int		i;

	tab = ft_split("Salut a tous je suis une string pour faire des test", ' ');
	tab2 = ft_split("                  ", ' ');
	tab3 = ft_split("aa---bbbbb-d----ssss---qq---", '-');
	tab4 = ft_split("0000000000000000000000000000000000", ' ');
	if(!tab2)
		return (1);

	i = 0;
	while (tab2[i])
	{
		printf("[%s]", tab2[i]);
		i++;
	}
}*/
