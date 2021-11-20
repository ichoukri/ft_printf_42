/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichoukri <ichoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:00:32 by ichoukri          #+#    #+#             */
/*   Updated: 2021/11/18 22:07:58 by ichoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_print_adress(unsigned long n, int *len)
{
	if (n >= 16)
		ft_print_adress(n / 16, len);
	if (n < 16)
		ft_putstr("0x", len);
	ft_putchar(LOW_HEX[n % 16], len);
}
