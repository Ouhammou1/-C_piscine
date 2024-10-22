/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:57:18 by bouhammo          #+#    #+#             */
/*   Updated: 2023/09/25 19:43:07 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && (str[0] >= 97 && str[0] <= 122))
		{
			str[0] = str[0] - 32;
		}
		else if (!(str[i - 1] >= 65 && str[i - 1] <= 90)
			&& !(str[i - 1] >= 97 && str[i - 1] <= 122)
			&& !(str[i - 1] >= 48 && str[i - 1] <= 57))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
