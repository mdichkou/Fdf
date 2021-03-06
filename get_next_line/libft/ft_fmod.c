/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchatoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 10:48:08 by zchatoua          #+#    #+#             */
/*   Updated: 2018/10/17 11:11:47 by zchatoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_fmod(double x, double y)
{
	double	mod;
	double	i;

	i = 1;
	while ((i * y) <= x)
		i++;
	i--;
	mod = x - (y * i);
	return (mod);
}
