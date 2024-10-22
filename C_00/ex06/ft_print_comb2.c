/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:40:49 by bouhammo          #+#    #+#             */
/*   Updated: 2023/09/16 22:17:11 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar( char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			write (1, " ", 1); 
			ft_putchar(j / 10 + '0' );
			ft_putchar(j % 10 + '0' );
			if (i < 98 || j < 99)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
