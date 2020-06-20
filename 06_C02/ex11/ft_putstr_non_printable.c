/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 10:42:30 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/13 21:23:32 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	dectohex(char c)
{
	int		outchar;

	if (c < 10)
	{
		outchar = 48;
		write(1, &outchar, 1);
		outchar = 48 + c;
		write(1, &outchar, 1);
	}
	else
	{
		outchar = 48 + (c / 16);
		write(1, &outchar, 1);
		outchar = 87 + (c % 16);
		write(1, &outchar, 1);
	}
}

void		ft_putstr_non_printable(char *str)
{
	int		i;
	int		outchar;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 && str[i] >= 0)
		{
			outchar = '\\';
			write(1, &outchar, 1);
			dectohex(str[i]);
		}
		else
		{
			outchar = str[i];
			write(1, &outchar, 1);
		}
		i++;
	}
}
