/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thru_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 20:24:21 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/23 23:31:35 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/headers.h"
#include "includes/prototipes.h"

char		*str_firstchar(char *str)
{
	char	*temp;

	temp = malloc(2);
	temp[0] = str[0];
	temp[1] = '\0';
	return (temp);
}

void		check_hundreds(int i, char *number, char *dictionary)
{
	if (number[i] != '0')
	{
		print_from_dict(dictionary, str_firstchar(&number[i]));
		print_from_dict(dictionary, "100");
	}
}

void		check_tens(int i, char *number, char *dictionary)
{
	char	temp[3];

	if (number[i] != '0')
	{
		if (number[i] == '1')
		{
			temp[0] = number[i];
			temp[1] = number[i + 1];
			temp[2] = '\0';
			print_from_dict(dictionary, temp);
		}
		if (number[i] > '1')
		{
			temp[0] = number[i];
			temp[1] = '0';
			temp[2] = '\0';
			print_from_dict(dictionary, temp);
		}
	}
}

void		check_units(int i, char *number, char *dictionary)
{
	if (number[i] != '0')
	{
		print_from_dict(dictionary, str_firstchar(&number[i]));
		if ((((ft_strlen(number) - i) + 1) % 3) == 0)
		{
			print_from_dict(dictionary, zillions(ft_strlen(number) - i));
		}
	}
}
