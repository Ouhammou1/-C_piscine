/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:16:01 by bouhammo          #+#    #+#             */
/*   Updated: 2023/09/18 23:33:36 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int			i;
	int			j;
	int			temp;

	i = 0;
	while (i < size)
	{
		j = 1;
		while (j < size)
		{
			if (tab[j - 1] > tab[j])
			{
				temp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
