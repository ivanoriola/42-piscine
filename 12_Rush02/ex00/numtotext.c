/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numtotext.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 15:44:11 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/23 23:30:30 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/headers.h"
#include "includes/prototipes.h"

void		print_from_dict(char *dictionary, char *tofind)
{
	char	*tempstr;
	int		i;

	tempstr = ft_strstr(dictionary, tofind);
	i = 0;
	while (!char_is_alpha(tempstr[i]))
	{
		i++;
	}
	while (tempstr[i] != '\n')
	{
		ft_putchar(tempstr[i]);
		i++;
	}
	ft_putchar(' ');
}

char		*zillions(int n_zeros)
{
	int		i;
	char	*one;
	char	*zero;

	one = "1";
	zero = "0";
	i = 0;
	while (i < n_zeros)
	{
		ft_strcat(one, zero);
		i++;
	}
	return (one);
}

void		numtotext(char *number, char *dictionary)
{
	int		i;

	i = 0;
	while (number[i] != '\0')
	{
		if ((ft_strlen(number) - i) % 3 == 0)
		{
			check_hundreds(i, number, dictionary);
		}
		if ((ft_strlen(number) - i) % 3 == 2)
		{
			check_tens(i, number, dictionary);
		}
		if ((ft_strlen(number) - i) % 3 == 1)
		{
			check_units(i, number, dictionary);
		}
		i++;
	}
}
