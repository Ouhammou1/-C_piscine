/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:43:05 by bouhammo          #+#    #+#             */
/*   Updated: 2023/10/02 15:21:16 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 1;
	if (nb >= 2)
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				prime = 0;
				break ;
			}
			i++;
		}
		return (prime);
	}
	return (0);
}
