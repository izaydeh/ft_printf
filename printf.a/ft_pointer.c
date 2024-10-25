/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:29:03 by ikhalil           #+#    #+#             */
/*   Updated: 2024/10/25 17:12:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexa_s(unsigned long h)
{
	int		i;
	char	*num;

	num = "0123456789abcdef";
	i = 0;
	if (h >= 16)
		i += ft_hexa_s(h / 16);
	ft_putchar(num[h % 16]);
	return (i + 1);
}

int	ft_pointer(void *x)
{
	int	i;

	if (x == NULL)
		return (write(1, "(nil)", 5));
	ft_putchar('0');
	ft_putchar('x');
	i = ft_hexa_s((unsigned long)x);
	return (i + 2);
}
