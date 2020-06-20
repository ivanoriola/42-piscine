/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:18:49 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/11 11:24:31 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temptab[size];
	int i;
	int j;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		temptab[j] = tab[i];
		i++;
		j--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temptab[i];
		i++;
	}
}
