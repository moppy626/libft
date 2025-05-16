/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachida <mmachida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:11:45 by mmachida          #+#    #+#             */
/*   Updated: 2024/07/16 16:13:40 by mmachida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;
	size_t	strlen;

	if (ft_strncmp(str2, "", 1) == 0)
		return ((char *)str1);
	i = 0;
	strlen = ft_strlen(str2);
	while (str1[i] != '\0' && (0 < len && len - strlen >= i))
	{
		if (len < strlen)
			return (NULL);
		if (ft_strncmp((char *)&str1[i], str2, strlen) == 0)
		{
			return ((char *)&str1[i]);
		}
		i++;
	}
	return (NULL);
}
