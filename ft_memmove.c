/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 11:20:24 by abettach          #+#    #+#             */
/*   Updated: 2019/10/27 11:09:28 by abettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = 0;
	if (!(dst1) && !(src1))
		return (NULL);
	if (dst1 > src1)
	{
		while (i < len)
		{
			dst1[len - 1] = src1[len - 1];
			len--;
		}
	}
	else
		while (i < len)
		{
			dst1[i] = src1[i];
			i++;
		}
	return (dst1);
}
