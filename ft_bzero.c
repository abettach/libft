/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abettach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 09:24:02 by abettach          #+#    #+#             */
/*   Updated: 2019/11/08 13:12:12 by abettach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*d;
	size_t			i;

	d = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		d[i] = 0;
		i++;
	}
	return ;
}