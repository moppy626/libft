/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmachida <mmachida@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 01:51:09 by user42            #+#    #+#             */
/*   Updated: 2024/05/29 11:02:00 by mmachida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int	tounsigned(int n);

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	un;

	if (n < 0)
		write (fd, "-", 1);
	un = tounsigned(n);
	if (un >= 10)
	{
		ft_putnbr_fd(un / 10, fd);
		ft_putnbr_fd(un % 10, fd);
	}
	else
	{
		c = un + '0';
		write (fd, &c, 1);
	}
}

static unsigned int	tounsigned(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}
