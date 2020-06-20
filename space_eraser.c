/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space_eraser.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 08:41:34 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/23 14:25:24 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/headers.h"
#include "includes/prototipes.h"

void	space_eraser(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		while(char_is_alpha(str[i]) != 1)
		{
			if (char_is_space(str[i]))
			{
				j = i;
				while (str[j] != '\0')
				{
					str[j] = str[j + 1];
					j++;
				}
				str[j] = '\0';
			}
			i++;
		}
		while (!(str[i] == '\n'))
		{
			i++;
		}
	}
	str[i] = '\0';
}
