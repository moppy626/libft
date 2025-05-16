/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachida <mmachida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:52:38 by mmachida          #+#    #+#             */
/*   Updated: 2024/07/14 15:28:56 by mmachida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*ubuf;

	ubuf = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		if (ubuf[i] == (unsigned char)ch)
			return ((void *)&ubuf[i]);
		i++;
	}
	return (0);
}
