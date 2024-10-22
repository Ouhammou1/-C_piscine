/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:50:36 by bouhammo          #+#    #+#             */
/*   Updated: 2023/09/30 21:44:50 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb )
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			nb = nb * (-1);
			write(1, "-", 1);
		}
		if (nb < 10)
		{
			putchar(nb + '0');
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			putchar(nb % 10 + '0');
		}
	}
}
