/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:44:57 by abettach          #+#    #+#             */
/*   Updated: 2019/10/22 15:48:28 by abettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	while (src[i] != '\0')
		i++;
	i += 1;
	cpy = malloc(sizeof(char) * i);
	j = 0;
	if ((!cpy))
		return (NULL);
	while (src[j] != '\0')
	{
		cpy[j] = src[j];
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
