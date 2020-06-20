/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 18:01:51 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/08 21:21:49 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char cifra[3];

	cifra[0] = 48;
	while (cifra[0] < 56)
	{
		cifra[1] = cifra[0] + 1;
		while (cifra[1] < 58)
		{
			cifra[2] = cifra[1] + 1;
			while (cifra[2] < 58)
			{
				write(1, cifra, 3);
				if (!(cifra[0] == 55 && cifra[1] == 56 && cifra[2] == 57))
				{
					write(1, ", ", 2);
				}
				cifra[2]++;
			}
			cifra[1]++;
		}
		cifra[0]++;
	}
}
