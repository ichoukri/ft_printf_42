/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichoukri <ichoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:55:35 by ichoukri          #+#    #+#             */
/*   Updated: 2021/11/17 18:02:41 by ichoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

void	print_unsigned(unsigned int a, int *len)
{
	if (a > 9)
		print_unsigned(a / 10, len);
	ft_putchar(a % 10 + '0', len);
}
