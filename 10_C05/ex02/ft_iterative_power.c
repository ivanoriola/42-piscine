/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:02:14 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/20 20:19:05 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	i;
	int finalnumber;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	finalnumber = nb;
	while (++i < power)
	{
		finalnumber *= nb;
	}
	return (finalnumber);
}
