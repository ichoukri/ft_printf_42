/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichoukri <ichoukri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:53:09 by ichoukri          #+#    #+#             */
/*   Updated: 2021/11/17 18:30:52 by ichoukri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/ft_printf.h"

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	*len += 1;
}