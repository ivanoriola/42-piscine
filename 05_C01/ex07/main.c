/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/11 12:18:05 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_rev_int_tab(int *tab, int size);

void		print_tab(int *tab, int size)
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

int			main(void)
{
	int		tab[4];
	int 	size;

	size = 4;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	print_tab(tab, size);
	ft_rev_int_tab(&tab[0], size);
	print_tab(tab, size);
	return (0);
}
