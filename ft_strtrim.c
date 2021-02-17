/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 10:00:10 by abettach          #+#    #+#             */
/*   Updated: 2019/11/16 12:29:37 by abettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_first(char const *s1, char const *set, size_t j)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0' && s1[j] != '\0')
	{
		if (s1[j] == set[i])
		{
			j++;
			i = 0;
		}
		else
			i++;
	}
	return (j);
}

static size_t	ft_last(char const *s1, char const *set, size_t j)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s1[j - 1] == set[i])
		{
			j--;
			i = 0;
		}
		else
			i++;
	}
	return (j);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	first;
	size_t	last;
	size_t	x;
	char	*tab;

	if (!s1 || !set)
		return (0);
	len = ft_strlen(s1);
	first = ft_first(s1, set, 0);
	if (first == len)
		return (ft_strdup(""));
	last = ft_last(s1, set, len);
	if (last < first)
		return (0);
	tab = malloc(last - first + 1);
	x = 0;
	if (!tab)
		return (0);
	while (s1[first] != '\0' && first < last)
		tab[x++] = s1[first++];
	tab[x] = '\0';
	return (tab);
}
