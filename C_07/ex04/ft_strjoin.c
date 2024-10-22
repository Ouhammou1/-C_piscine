/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:04:05 by bouhammo          #+#    #+#             */
/*   Updated: 2023/10/05 20:12:10 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strs_len(char **strs, int size, char *sep)
{
	char	*str;
	int		length;
	int		seplen;
	int		i;

	length = 0;
	i = 0;
	if (size <= 0)
	{
		str = malloc(sizeof(char));
		*str = '\0';
		return (str);
	}
	while (i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	seplen = ft_strlen(sep) * (size - 1);
	length += seplen;
	str = malloc(sizeof(char) * length + 1);
	*str = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = ft_strs_len(strs, size, sep);
	i = 0;
	k = 0;
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (i < size - 1 && sep[j])
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}
