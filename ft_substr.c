/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachida <mmachida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 19:52:04 by user42            #+#    #+#             */
/*   Updated: 2024/07/16 15:20:01 by mmachida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		idx;
	size_t		slen;
	size_t		cpylen;
	char		*ret;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen > (start + len))
		cpylen = len;
	else if (slen > start)
		cpylen = slen - start;
	else
		cpylen = 0;
	ret = malloc(sizeof(char) * (cpylen + 1));
	if (ret == NULL)
		return (NULL);
	idx = 0;
	while (idx < cpylen)
	{
		ret[idx++] = s[start++];
	}
	ret[idx] = '\0';
	return (ret);
}
