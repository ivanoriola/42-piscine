/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/10 15:35:48 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);
void	ft_putnbr(int nb);

int		main(void)
{
	int	a;
	int	b;

	a = 100;
	b = 42;
	ft_putnbr(a);
	ft_putnbr(b);
	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putnbr(b);
	return (0);
}
