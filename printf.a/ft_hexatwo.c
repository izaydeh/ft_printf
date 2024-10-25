/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexatwo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:06:25 by ikhalil           #+#    #+#             */
/*   Updated: 2024/10/25 17:12:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexatwo(unsigned int h)
{
	int		i;
	char	*num;

	num = "0123456789ABCDEF";
	i = 0;
	if (h >= 16)
		i += ft_hexatwo(h / 16);
	ft_putchar(num[h % 16]);
	return (i + 1);
}
