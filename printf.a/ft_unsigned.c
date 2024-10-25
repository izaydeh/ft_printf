/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:42:07 by ikhalil           #+#    #+#             */
/*   Updated: 2024/10/25 17:13:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int u)
{
	int		c;
	int		x;
	char	f[10];

	c = 0;
	x = 0;
	if (u == 0)
		return (write(1, "0", 1));
	while (u > 0)
	{
		f[c] = ((u % 10) + '0');
		c++;
		u = u / 10;
	}
	x = c;
	while (c--)
		write (1, &f[c], 1);
	return (x);
}
