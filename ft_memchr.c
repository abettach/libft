/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:01:58 by abettach          #+#    #+#             */
/*   Updated: 2019/11/10 16:01:28 by abettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mc;
	unsigned char	ms;
	size_t			i;

	i = 0;
	ms = (unsigned char)c;
	mc = (unsigned char *)s;
	while (i < n)
	{
		if (mc[i] == ms)
			return (&mc[i]);
		i++;
	}
	return (NULL);
}
