/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:04:07 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/20 19:42:24 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0 || nb > 16)
		return (0);
	if (nb == 0)
		return (1);
	i = nb;
	while (i > 1)
	{
		nb *= (--i);
	}
	return (nb);
}
