/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:46:03 by abettach          #+#    #+#             */
/*   Updated: 2019/10/22 17:22:45 by abettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*n;

	i = 0;
	if (!s && c)
		return (NULL);
	while (s[i] != '\0')
		i++;
	while (s[i] != (unsigned char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	n = (char *)&s[i];
	return (n);
}
