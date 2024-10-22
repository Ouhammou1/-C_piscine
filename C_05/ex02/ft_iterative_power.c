/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:33:59 by bouhammo          #+#    #+#             */
/*   Updated: 2023/10/02 16:01:28 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int			i;
	int			p;

	i = 1;
	p = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else 
	{
		while (i <= power)
		{
			p = p * nb;
			i++;
		}
		return (p);
	}
}
