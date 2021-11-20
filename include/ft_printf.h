/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichoukri <ichoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:11:57 by ichoukri          #+#    #+#             */
/*   Updated: 2021/11/18 22:07:40 by ichoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define LOW_HEX "0123456789abcdef"
# define UP_HEX "0123456789ABCDEF"

void	ft_putchar(char c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putnbr(int n, int *len);
void	print_unsigned(unsigned int a, int *len);
void	print_hex( unsigned long int n, char c, int *len);
void	ft_print_adress(unsigned long n, int *len);
void	print(va_list ptr, const char *format, int *len);
int		ft_printf(const char *format, ...);

#endif