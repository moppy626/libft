/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachida <mmachida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:26:57 by mmachida          #+#    #+#             */
/*   Updated: 2024/06/17 21:38:35 by mmachida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	unsigned char	*cbuf1;
	unsigned char	*cbuf2;
	size_t			i;

	cbuf1 = (unsigned char *) buf1;
	cbuf2 = (unsigned char *) buf2;
	i = 0;
	while (i < n)
	{
		if (cbuf1[i] != cbuf2[i])
			return (cbuf1[i] - cbuf2[i]);
		i++;
	}
	return (0);
}
