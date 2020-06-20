/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 14:57:55 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/20 19:09:41 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		baseok(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i;
		while (base[j] != '\0')
		{
			if (base[i] == base[++j])
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (baseok(base))
	{
		len = 0;
		while (base[len] != '\0')
			len++;
		if (len < 2)
			return ;
		if (nbr < 0)
		{
			ft_putchar('-'); //pasar a unsinged
			ft_putnbr_base(nbr * -1, base);
		}
		else
		{
			if (nbr >= len)
				ft_putnbr_base(nbr / len, base);
			ft_putchar(base[nbr % len]);
		}
	}
}
