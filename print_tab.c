/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 13:12:36 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/11 13:13:46 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_tab(int *tab, int size)
{
	int		i;
	char 	out;

	i = 0;
	while (i<size)
	{
		out = '0' + tab[i];
		write(1, &out, 1);
		i++;
	}
}
