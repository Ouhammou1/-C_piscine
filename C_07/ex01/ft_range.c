/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:54:20 by bouhammo          #+#    #+#             */
/*   Updated: 2023/10/05 20:10:08 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*p;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	p = malloc(range * sizeof(int));
	if (!p)
		return (0);
	while (i < range)
	{
		*(p + i) = min + i;
		i++;
	}
	return (p);
}
