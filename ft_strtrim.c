/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachida <mmachida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 19:57:30 by user42            #+#    #+#             */
/*   Updated: 2024/06/17 21:37:25 by mmachida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	compare(char s, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		len;
	char		*ret;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	end = 0;
	if (len > 0)
	{
		end = len - 1;
		while (compare(s1[end], set) == 1)
			end--;
		end = len - (end + 1);
	}
	start = 0;
	while (compare(s1[start], set) == 1 && len != end)
		start++;
	ret = malloc(sizeof(char) * (len - (start + end) + 1));
	if (!ret)
		return (NULL);
	ret = ft_memcpy(ret, s1 + start, len - (start + end));
	ret[len - (start + end)] = '\0';
	return (ret);
}

static char	compare(char s, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (s == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
