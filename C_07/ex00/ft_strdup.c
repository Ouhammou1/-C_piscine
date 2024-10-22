/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:44:12 by bouhammo          #+#    #+#             */
/*   Updated: 2023/10/05 20:09:33 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	lenth(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		l;
	char	*p;

	i = 0;
	l = lenth(src);
	p = (char *)malloc(l * sizeof(char) + 1);
	if (!p)
		return (0);
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
