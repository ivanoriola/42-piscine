/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/11 08:17:17 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_putnbr(int nb);

int		main(void)
{
	int	a;
	int	b;
	int div;
	int mod;

	a = 100;
	b = 42;
	ft_putnbr(a);
	ft_putnbr(b);
	ft_div_mod(a, b, &div, &mod);
	ft_putnbr(div);
	ft_putnbr(mod);
	return (0);
}
