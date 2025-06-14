/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachida <mmachida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:44:58 by mmachida          #+#    #+#             */
/*   Updated: 2024/06/17 21:38:39 by mmachida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*work;
	int		i;

	if (!lst)
		return (0);
	work = lst;
	i = 1;
	while (work->next != NULL)
	{
		work = work->next;
		i++;
	}
	return (i);
}
