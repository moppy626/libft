/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachida <mmachida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:55:16 by mmachida          #+#    #+#             */
/*   Updated: 2024/06/17 21:38:51 by mmachida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*work;

	if (!lst)
		return (NULL);
	work = lst;
	while (work->next != NULL)
	{
		work = work->next;
	}
	return (work);
}
