/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:06:18 by abettach          #+#    #+#             */
/*   Updated: 2019/11/16 12:29:25 by abettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char		**ft_free(char **tab, int x)
{
	int i;

	i = 0;
	while (i <= x)
		free(tab[i++]);
	free(tab);
	return (NULL);
}

static	int			word_count(char const *str, char ch)
{
	int x;

	x = 0;
	while (*str != '\0')
	{
		while (*str == ch)
			str++;
		if (*str != ch && *str)
		{
			x++;
			while (*str != ch && *str)
				str++;
		}
	}
	return (++x);
}

static	int			len(char const *str, char ch)
{
	int x;

	x = 0;
	while (*str != ch && *str)
	{
		str++;
		x++;
	}
	return (++x);
}

char				**ft_split(char const *s, char c)
{
	int		x;
	int		y;
	char	**tab;

	x = 0;
	if (!s || !(tab = (char **)malloc(sizeof(char*) * word_count(s, c))))
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			y = 0;
			if (!(tab[x] = (char *)malloc(len(s, c))))
				return (ft_free(tab, x));
			while (*s != c && *s)
				tab[x][y++] = *s++;
			tab[x][y] = '\0';
			x++;
		}
	}
	tab[x] = NULL;
	return (tab);
}
