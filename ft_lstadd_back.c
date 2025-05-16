/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachida <mmachida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:26:29 by mmachida          #+#    #+#             */
/*   Updated: 2024/06/17 21:38:58 by mmachida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*work;

	if (!lst || !(*lst))
	{
		*lst = new;
		return ;
	}
	else
	{
		work = ft_lstlast(*lst);
		work->next = new;
	}
}
