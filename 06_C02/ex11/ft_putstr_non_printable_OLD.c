/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 10:42:30 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/13 08:47:12 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		non_printable(char c)
{
	if ((c >= 0) && (c <= 31))
	{
		return (1);
	}
	return (0);
}

void	dectohex(char c)
{
	int outchar;

	if (c < 9)
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

void	ft_putstr_non_printable(char *str)
{
	int outchar;
	int i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		if (non_printable(str[i]))
		{
			outchar = '\\';
			write(1, &outchar, 1);
			dectohex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
