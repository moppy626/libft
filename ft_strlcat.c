/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachida <mmachida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 09:57:02 by mmachida          #+#    #+#             */
/*   Updated: 2024/07/16 15:23:46 by mmachida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	index;

	d = 0;
	s = 0;
	index = 0;
	while (dst[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	while (src[index] != '\0' && (d + index + 1) < size)
	{
		dst[d + index] = src[index];
		index++;
	}
	dst[d + index] = '\0';
	if (d <= size)
		return (d + s);
	else
		return (size + s);
}
