/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 20:39:16 by kskostyl          #+#    #+#             */
/*   Updated: 2019/02/17 23:37:28 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int i)
{
	char			k;
	unsigned int	num;

	if (i < 0)
	{
		write(1, "-", 1);
		num = (-1) * i;
	}
	else
		num = i;
	if (num > 9)
		ft_putnbr(num / 10);
	k = num % 10 + '0';
	write(1, &k, 1);
}
