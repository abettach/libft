/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 09:59:58 by abettach          #+#    #+#             */
/*   Updated: 2019/11/11 13:08:47 by abettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	src = (char *)src;
	if (!(src))
		return (0);
	while (src[i] != '\0' && size != 0 && (i < (size - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	if (size == 0)
		return (ft_strlen(src));
	dst[i] = '\0';
	return (ft_strlen(src));
}
