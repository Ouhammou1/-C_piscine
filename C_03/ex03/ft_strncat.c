/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:50:58 by bouhammo          #+#    #+#             */
/*   Updated: 2023/09/29 22:48:24 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	length(char *dest)
{
	int		i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i;
	int					j;

	i = 0;
	j = length(dest); 
	while (i < nb && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
