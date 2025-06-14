/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachida <mmachida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:25:23 by mmachida          #+#    #+#             */
/*   Updated: 2024/06/17 21:38:29 by mmachida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char		*ret;
	size_t				i;

	ret = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ret[i] = c;
		i++;
	}
	return (ret);
}
