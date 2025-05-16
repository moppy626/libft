/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachida <mmachida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:32:30 by user42            #+#    #+#             */
/*   Updated: 2024/06/17 21:39:15 by mmachida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	if (nmemb != 0 && SIZE_MAX / nmemb < size)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ret = malloc (nmemb * size);
	if (!ret)
		return (NULL);
	ft_memset (ret, 0, nmemb * size);
	return (ret);
}
