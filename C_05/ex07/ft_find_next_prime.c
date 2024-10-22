/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:35:44 by bouhammo          #+#    #+#             */
/*   Updated: 2023/10/02 23:13:00 by bouhammo         ###   ########.fr       */
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
		while (i <= nb / i)
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (nb >= 2)
	{
		if (ft_is_prime(nb + i) == 1)
			return (nb + i);
		i++;
	}
	return (0);
}
