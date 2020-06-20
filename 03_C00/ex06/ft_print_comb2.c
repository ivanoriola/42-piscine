/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:03:40 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/10 16:41:23 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writer(char ca[2], char cb[2])
{
	if ((cb[0] > ca[0]) || ((ca[0] == cb[0]) && (cb[1] > ca[1])))
	{
		write(1, ca, 2);
		write(1, " ", 1);
		write(1, cb, 2);
		if (!(ca[0] == 57 && ca[1] == 56 && cb[0] == 57 && cb[1] == 57))
			write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char ca[2];
	char cb[2];

	ca[0] = 48;
	while (ca[0] < 58)
	{
		ca[1] = 48;
		while (ca[1] < 58)
		{
			cb[0] = 48;
			while (cb[0] < 58)
			{
				cb[1] = 48;
				while (cb[1] < 58)
				{
					writer(ca, cb);
					cb[1]++;
				}
				cb[0]++;
			}
			ca[1]++;
		}
		ca[0]++;
	}
}
