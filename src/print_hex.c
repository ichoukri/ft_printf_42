/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichoukri <ichoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:56:26 by ichoukri          #+#    #+#             */
/*   Updated: 2021/11/18 14:58:44 by ichoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	print_hex(unsigned long int n, char c, int *len)
{
	if (n >= 16)
		print_hex(n / 16, c, len);
	if (c == 'X')
		ft_putchar(UP_HEX[n % 16], len);
	else
		ft_putchar(LOW_HEX[n % 16], len);
}
