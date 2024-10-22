/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouhammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 21:02:59 by bouhammo          #+#    #+#             */
/*   Updated: 2023/09/18 21:51:48 by bouhammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int			*p1;
	int			*p2;

	p1 = &a;
	p2 = &b;
	*div = *p1 / *p2;
	*mod = *p1 % *p2;
}
