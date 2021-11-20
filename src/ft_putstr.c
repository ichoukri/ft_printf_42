/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichoukri <ichoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:54:08 by ichoukri          #+#    #+#             */
/*   Updated: 2021/11/19 16:13:37 by ichoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
		ft_putstr("(null)", len);
	else
	{
		while (str[i] != '\0')
		{
			ft_putchar(str[i], len);
			i++;
		}
	}
}
