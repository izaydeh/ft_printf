/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:12:15 by ikhalil           #+#    #+#             */
/*   Updated: 2024/10/25 17:13:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char x);
int		ft_putnbr(int nbr);
int		ft_putstr(char *maguire);
int		count_digits(int n);
int		ft_unsigned(unsigned int u);
int		ft_hexa_(unsigned int h);
int		ft_hexatwo(unsigned int x);
int		ft_hexa_sm(unsigned int x);
int		ft_pointer(void *x);

#endif
