/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 20:27:29 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/10 14:17:31 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nbchar;
	int		nbtemp;
	int		nbsize;

	nbsize = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	nbtemp = nb;
	while ((nbtemp /= 10) > 0)
		nbsize *= 10;
	nbtemp = nb;
	while (nbsize)
	{
		nbchar = ((nbtemp / nbsize) + 48);
		write(1, &nbchar, 1);
		nbtemp %= nbsize;
		nbsize /= 10;
	}
}
