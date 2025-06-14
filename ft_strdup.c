/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachida <mmachida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:18:24 by user42            #+#    #+#             */
/*   Updated: 2024/06/17 21:38:19 by mmachida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	slen;
	char	*ret;

	i = 0;
	slen = ft_strlen(s);
	ret = malloc(sizeof(char) * (slen + 1));
	if (!ret)
		return (NULL);
	while (i < slen + 1)
	{
		ret[i] = s[i];
		i++;
	}
	return (ret);
}
