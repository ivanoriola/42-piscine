/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 15:47:04 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/20 19:06:27 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	int		nbr = 8456;
	char	*base = "-2147483648
";

	ft_putnbr_base(nbr, base);
	return (0);
}
