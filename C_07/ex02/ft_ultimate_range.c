/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:27:40 by bouhammo          #+#    #+#             */
/*   Updated: 2023/10/05 20:10:56 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*p;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	p = malloc(len * sizeof(int));
	if (!p)
	{
		*range = 0;
		return (-1);
	}
	while (i < len)
	{
		*(p + i) = min + i;
		i++;
	}
	*range = p;
	return (i);
}
