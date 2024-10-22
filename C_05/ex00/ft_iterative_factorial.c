/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:25:34 by bouhammo          #+#    #+#             */
/*   Updated: 2023/10/02 15:30:18 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int		i;
	int		f;

	i = 1;
	f = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (i <= nb)
		{
			f = f * i;
			i++;
		}
		return (f);
	}
}
