/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichoukri <ichoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:01:22 by ichoukri          #+#    #+#             */
/*   Updated: 2021/11/17 19:04:29 by ichoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

void	print(va_list ptr, const char *format, int *len)
{
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				ft_putchar(va_arg(ptr, int), len);
			else if (*format == 's')
				ft_putstr(va_arg(ptr, char *), len);
			else if (*format == 'p')
				ft_print_adress(va_arg(ptr, unsigned long), len);
			else if (*format == 'd' || *format == 'i')
				ft_putnbr(va_arg(ptr, int), len);
			else if (*format == 'u')
				print_unsigned(va_arg(ptr, int), len);
			else if (*format == 'x' || *format == 'X')
				print_hex(va_arg(ptr, unsigned int), *format, len);
			else
				ft_putchar('%', len);
		}
		else
			ft_putchar(*format, len);
		format++;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		len;

	len = 0;
	va_start(ptr, format);
	if (*format)
		print(ptr, format, &len);
	va_end(ptr);
	return (len);
}
