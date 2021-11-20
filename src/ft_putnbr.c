/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichoukri <ichoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:09:21 by ichoukri          #+#    #+#             */
/*   Updated: 2021/11/18 14:32:45 by ichoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', len);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10, len);
	ft_putchar((nb % 10) + '0', len);
}
